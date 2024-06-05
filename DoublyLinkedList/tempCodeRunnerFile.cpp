// insertion at start
// node *createLinkedList(int arr[], int size, node *head)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (head == NULL)
//         {
//             head = new node(arr[i]);
//         }
//         else
//         {
//             node *temp = new node(arr[i]);
//             temp->next = head;
//             head->prev = temp;
//             head = temp;
//         }
//     }
//     return head;
// }