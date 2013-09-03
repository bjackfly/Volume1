node* circular_find(node* head, int value) {
  auto current = head;
  while(nullptr != current
        && current->data != value) {
    current = current->next;
    if (current == head) {
      return nullptr;
    }
  }
  return current;
}