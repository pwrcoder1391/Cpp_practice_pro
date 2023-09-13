import json

languages = [
    ['ABC', 1987],
    ['Algol 68', 1968],
    ['APL', 1962],
    ['C', 1973],
    ['Haskell', 1990],
    ['Lisp', 1958],
    ['Modula-2', 1977],
    ['Perl', 1987],
]

with open('json_test.json','w',encoding='utf-8') as test_file:
    json.dump(languages , test_file)
    
# dumping the file in the newly made json file 

with open('json_test.json','r',encoding='utf-8') as testing_read:
    data = json.load(testing_read)

print(data)
print(data[2])

#loading the data from the new file created