c = {1:20, 2:32, 3:47, 4:7, 5:27}
print("Original dictionary:", c)
n = len(c)
while True:
    val = input(f"Enter value for key {n+1}: ")
    try:
        val = int(val)
        break
    except ValueError:
        print("Enter a valid integer.")
c[n+1] = val
print("Dictionary after adding:", c)
sorted_asc = dict(sorted(c.items(), key=lambda x: x[1]))
print("Sorted (ascending by value):", sorted_asc)
sorted_desc = dict(sorted(c.items(), key=lambda x: x[1], reverse=True))
print("Sorted (descending by value):", sorted_desc)
