#include<bits/stdc++.h>
using namespace std;

int distinctCharacters(string s)
{
  int num[26]= {0};
   int cnt=0;

  for(int i=0;i<s.length();i++)
   num[s[i]-'a']++;

  for(int i=0;i<26;i++)
   {
     if (num[i]>0)
        cnt++;
   }
  return cnt;
 }
 int waystosplit(string s)
{
   int n=s.length();
   int ans=0;
  
  for(int i=1;i<n;i++)
  {
     string left=s.substr(0,i);
     string right=s.substr(i,n-1);

   if(distinctCharacters(left)== distinctCharacters(right))
       ans++;

  }
     return ans;
} 

int main()
{   
  string s;
  cout<<"Enter the string:";
  cin>>s;

  cout<<waystosplit(s);
  return 0;
}
