int main() {
   IntNode* headObj = nullptr; // Create intNode objects
   IntNode* currObj = nullptr;
   IntNode* lastObj = nullptr;
   int i = 0;            
   
   headObj = new IntNode(-1);        // Front of nodes list
   lastObj = headObj;
   
   for (i = 0; i < 20; ++i) {        // Append 20 rand nums
      currObj = new IntNode(rand());
      
      lastObj->InsertAfter(currObj); // Append curr
      lastObj = currObj;             // Curr is the new last item
   }
   
   currObj = headObj;                // Print the list
   currObj = currObj->GetNext();
   /*while (currObj != nullptr) {
      currObj->PrintNodeData();
      currObj = currObj->GetNext();
   }*/

currObj = headObj;     // Print the list
   IntNode* minObj;
   minObj = new IntNode(-1);//
   minObj = headObj;
   
   while (currObj != nullptr) {
      if(currObj->GetDataVal() < minObj->GetDataVal() )
      {
         minObj = currObj;
      }
      currObj = currObj->GetNext();
   }   
   
   minObj->PrintNodeData();
   
   return 0;
}
