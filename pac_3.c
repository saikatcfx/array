

/*
 while (temp != NULL)
    {
        temp2 = head;

        // Finding the largest element in the unsorted part.
        // We put it at the end of the unsorted part.
        while (temp2->next != NULL)
        {
            if (temp2->data > temp2->next->data)
            {
                flag = temp2->data;
                temp2->data = temp2->next->data;
                temp2->next->data = flag;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }

*/
/*

void removeduplicates(node* head)
{
    //Pointer to traverse the linked list.
    node* curr=head;
    //pointer to store the next to the next pointer of the current 
    //node.
    node* nextofcurr;
    //For empty linked list.
    if(curr==nullptr)
    {
        return;
    }
    //Traversing through the linked list.
    while(curr->next!=nullptr)
    {
        //When the next node is a duplicate of the current node.
        if(curr->data==curr->next->data)
        {
            //Store the next of the next node.
            nextofcurr=curr->next->next;
            //Delete the next node
            free(curr->next);
            //Assign the next node to the iterator.
            curr->next=nextofcurr;
        }
        //When the next node is not a duplicate of the current
        //node.
        else
        {
            curr=curr->next;
        }
    }
}
*/