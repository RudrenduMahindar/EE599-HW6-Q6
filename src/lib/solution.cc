#include "solution.h"
#include <algorithm>

/*void Solution::arrange_vector(vector<int>& v,int i)
{
  vector<int> v1;
  vector<int> v2;
  int n=v.at(i);
  v.erase(v.begin()+i); //indexed number should not be added again
  for(auto it=v.begin();it!=v.end();it++)
  {
    if((*it)<=n) //if number equal to index number then add it to new vector for left side of indexed number
      v1.push_back(*it);
    else  
      v2.push_back(*it); //greater than indexed number
  }
  v1.push_back(n);//add indexed number after left
  v.resize(v1.size()+v2.size());//should hold all elements
  //vector<int> v3(v1.size()+v2.size());
  //v.clear();
  merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
  //v=v3;
}*/

//in-place vector partition
void Solution::arrange_vector(vector<int>& v,int partition_index)
{
  if(!v.empty() && partition_index>=0 && partition_index<=(v.size()-1))
  {
    swap(v[partition_index],v[v.size()-1]);
    int pivot = v.back();
    int i=-1;
    for(int j=0;j<=(v.size()-1);j++)
    {
      if(v[j]<pivot)
      {
        i++;
        swap(v[i],v[j]);
      }
    }
  swap(v[i+1],v[v.size()-1]);
  }
}


