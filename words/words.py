# print("Welcome to the program that receives words separated by spaces and prints them one by one")
# sentence=input("Input all the words separated by spaces: ")
# words=sentence.split()
# print(*words, sep="\n")

import sys
sentence=sys.argv[1]
words=sentence.split()
print(*words, sep="\n")