def compare(version1, version2):
    """""
    The compare function can compare two separate 'version' strings. 
    Version strings are integers separated by a one or more dot: '.'
    
    The function returns -1 if the second argument is larger than the first.
    It returns 1 if the first argument is larger.
    If both arguments are equal, it will return 0.
    """""

    # here we split the version into different `parts`
    v1_parts = version1.split('.')
    v2_parts = version2.split('.')

    # we can make the lists the same length 
    # by multiplying by 0 and subtracting the 'part' length from the maximum.
    max_length = max(len(v1_parts), len(v2_parts))
    v1_parts = [int(x) for x in v1_parts] + [0] * (max_length - len(v1_parts))
    v2_parts = [int(x) for x in v2_parts] + [0] * (max_length - len(v2_parts))
    
    # this for loop/match case will compare each part
    # and handle the logic
    for i in range(max_length):
        match (v1_parts[i], v2_parts[i]):
            case (v1, v2) if v1 < v2:
                return -1
            case (v1, v2) if v1 > v2:
                return 1
            case _:
                continue 
    return 0 # returns if no conditions are satisfied (i.e. both parts are equal)

# now we can use the function:
print(compare("1.5", "1.55")) ## Output: -1
print(compare("1.01", "1.0001")) ## Output: 0
print(compare("1.0.5.1.2", "1.01")) ## Output: -1
print(compare("2.5", "2")) ## Output: 1