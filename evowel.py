word=input("enter a word")
vowels=['a','e','i','o','u']
list=[]
for x in word:
    if ( x in vowels and x not in list):
        list.append(x)
print("vowel present in the given word is:",list)
