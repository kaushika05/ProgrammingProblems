def binary_search(searcharray, targetelement):
    left, right = 0, len(searcharray) - 1
    while left <= right:
        mid = (left + right) // 2
        if searcharray[mid] == targetelement:
            return mid
        elif searcharray[mid] < targetelement:
            left = mid + 1
        else:
            right = mid - 1
    return -1

arr = [1, 3, 5, 7, 9]
target = 5
print(f"Element found at index: {binary_search(arr, target)}")
