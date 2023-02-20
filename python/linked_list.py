
class Node:
    def __init__(self,value):
        self.value = value
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def append(self,value):
        new_node = Node(value)
        if not self.head:
            self.head = new_node
            return
        current_node = self.head
        while current_node.next:
            current_node = current_node.next
        current_node.next = new_node

    def print_list(self):
        if not self.head:
            print("LISTA VAZIA")
            return
        current_node = self.head
        while current_node:
            print(current_node.value)
            current_node = current_node.next


