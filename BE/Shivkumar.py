def unique_characters_counter(input_string):
	return len(set(list(input_string)))

def number_of_ways(input_string):
	count=0
	for i in range(1,len(input_string)):
		test1 = input_string[:i]
		test2 = input_string[i:]
		if unique_characters_counter(test1)==unique_characters_counter(test2):
			count+=1
	return count

str1=input()
print("Number of ways:",number_of_ways(str1))
