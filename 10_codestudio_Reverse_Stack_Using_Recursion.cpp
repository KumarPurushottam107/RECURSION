void insert(stack<int>&stack,int val)
{
    if(stack.size()==0)
    {   
        stack.push(val);
        return;
    }
    int temp=stack.top();
    stack.pop();
    
    insert(stack,val);
    
    stack.push(temp);
    
    return;
}


void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.size()==0)
        return ;
    int val = stack.top();
    stack.pop();
    reverseStack(stack);
    
    insert(stack,val);
    
    return ;
}
