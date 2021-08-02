scale = input()
scale = scale.replace(" ", "")
ascending = "12345678"
descending = "87654321"
if scale == ascending:
    print("ascending")
elif scale == descending:
    print("descending")
else : print("mixed")