shelf = [2, 5, 7, 1, 3]
for i in range(len(shelf)):
    pos = 1
    max = shelf[pos]
    while pos <len(shelf):
        if shelf[pos] > max:
            max = shelf[pos]
        pos += 1
    shelf.insert(0,shelf.pop(shelf.index(max)))

print(shelf)