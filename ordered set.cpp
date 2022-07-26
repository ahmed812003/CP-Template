#include <bits/stdc++.h>
using namespace std;

#define ll long long

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> ordered_set;


#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
tree_order_statistics_node_update> ordered_multiset;

int main()
{
    ordered_set s;
    int k;
    s.order_of_key (k); // Number of items strictly smaller than k .
    s.find_by_order(k); // K-th element in a set (counting from zero).
    
    return 0;
}