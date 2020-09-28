import java.util.Scanner;

class ak{ 


static int distinctChars(String s) 
{ 
	int freq[] = new int[26]; 
	int count = 0; 
	
	for (int i = 0; i < s.length(); i++) 
		freq[s.charAt(i) - 'a']++; 

	for (int i = 0; i < 26; i++) { 
		if (freq[i] > 0) 
			count++; 
	} 

	return count; 
} 

static int waysToSplit(String s) 
{ 
	int n = s.length(); 
	int answer = 0; 
	

	for (int i = 1; i < n; i++) { 
		
		String left = s.substring(0, i); 
		String right = s.substring(i, n); 

		
		if (distinctChars(left) == 
			distinctChars(right)) 
			answer++; 
	} 
	return answer; 
} 
public static void main(String[] args) 
{ 
	Scanner in=new Scanner(System.in);
	String s = ""; 
	System.out.print("\nEnter the String::");
	s=in.next(); 


	System.out.print(waysToSplit(s)); 
} 
} 


