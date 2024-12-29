def find_first_last(arr, target):
    def binary_search_left():
        left, right = 0, len(arr) - 1
        while left <= right:
            mid = (left + right) // 2
            if arr[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        return left

    def binary_search_right():
        left, right = 0, len(arr) - 1
        while left <= right:
            mid = (left + right) // 2
            if arr[mid] <= target:
                left = mid + 1
            else:
                right = mid - 1
        return right

    left = binary_search_left()
    right = binary_search_right()

    if left <= right:
        return [left, right]
    return [-1, -1]

arr = [5, 7, 7, 8, 8, 10]
target = 8
print(find_first_last(arr, target))
