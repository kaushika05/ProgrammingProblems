arr1 = [1, 3, 5]
arr2 = [2, 4, 6]
i = j = 0
result = []

while i < len(arr1) and j < len(arr2):
    if arr1[i] < arr2[j]:
        result.append(arr1[i])
        i += 1
    else:
        result.append(arr2[j])
        j += 1

result.extend(arr1[i:])
result.extend(arr2[j:])
print(result)
