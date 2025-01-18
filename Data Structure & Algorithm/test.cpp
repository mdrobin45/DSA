ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
   ListNode *tempA = headA;

   while (tempA != nullptr)
   {
      ListNode *tempB = headB;
      while (tempB != nullptr)
      {
         if (tempA == tempB)
         {
            return tempA;
         }
         tempB = tempB->next;
      }
      tempA = tempA->next;
   }
   return nullptr;
}