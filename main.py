users = [
    {
        "name": "John",
        "age": 25
    },
    {
        "name": "Vladimir",
        "age": 20
    },
    {
        "name": "Kevin",
        "age": 30
    }
]

# for i in users:
#     users.sort(key=my_fn)
#     print(i.get("name"))

l = []
for i in users:
    l.append(i.get("name"))

l.sort()

print(l)

for i in l:
    print(i)
