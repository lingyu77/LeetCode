// 51 ms
class MyLinkedList {
    
    class Node{
        int value;
        Node next;
    
        public Node(int val) { 
            this.value = val;
        }
    }
    
    Node head;
    Node tail;
    int length;
    
    /** Initialize your data structure here. */
    public MyLinkedList() {
        head = null;
        tail = null;
        length = 0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    public int get(int index) {
        Node node = head;
        
        if (index < 0 || index >= length) 
            return -1;
            
        while (index > 0 && node != null) {
            index--;
            node = node.next;
        }
        
        return (node == null)? -1 : node.value;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    public void addAtHead(int val) {
        
        if (head == null) {
            head = new Node(val);
            tail = head;
        } else {
            Node node = new Node(val);
            node.next = head;
            head = node;
        }
        
        length++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    public void addAtTail(int val) {

        if (tail == null) {
            tail = new Node(val);
            head = tail;
        } else {
            Node node = new Node(val);
            tail.next = node;
            tail = node;
        }
        
        length++;        
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    public void addAtIndex(int index, int val) {
        
        // if (index > length || index < 0) return -1; 
        if (index > length) return;
        if (index < 0) {
            addAtHead(val);
            return;
        }
        
        if (index == 0) {
            addAtHead(val);
        } else if (index == length) {
            addAtTail(val);
        } else {
            Node node = head;
            Node prev = null;
                
            while (index > 0) {
                index--;
                prev = node;
                node = node.next;
            }
            
            prev.next = new Node(val);
            prev.next.next = node;
            length++;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    public void deleteAtIndex(int index) {
        if (index >= length || index < 0) return;
        
        if (index == 0) {
            head = head.next;
            
            if (head == null) {
                tail = null;    
            }
        } else {
            Node node = head;
            Node prev = null;

            while (index > 0) {
                index--;
                prev = node;
                node = node.next;
            }

            if (node.next == null) {
                prev.next = node.next;
                tail = prev;
            } else {
                prev.next = prev.next.next;
            }            
        }

        length--;
    }
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */

/* Test case bug with negative index 
Your input
["MyLinkedList","addAtIndex","get","deleteAtIndex"]
[[],[-1,0],[0],[-1]]
Output [null,null,-1,null]
Expected [null,null,0,null]

get(index) : Get the value of the index-th node in the linked list. If the index is invalid, return -1.
addAtIndex() with negative index as addAtHead() then it pass, but it doesn't make sense!
*/

/* Reference : 47 ms
sample 47 ms submission
class MyLinkedList {

    List<Integer> list = new ArrayList<Integer>();
    /** Initialize your data structure here. */
    public MyLinkedList() {
        
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    public int get(int index) {
        if(list.size() == 0 || index >= list.size() || index < 0)
            return -1;
        return list.get(index);
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    public void addAtHead(int val) {
        if(list.size() == 0)
            list.add(val);
        else
            list.add(0, val);
    }
    
    /** Append a node of value val to the last element of the linked list. */
    public void addAtTail(int val) {
        list.add(val);
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    public void addAtIndex(int index, int val) {
        
        if(list.size() == 0) {
            if(index <= 0)
                list.add(val);
        } else {
            if(index == list.size())
                list.add(val);
            else
                if(index < list.size())
                    list.add(index, val);
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    public void deleteAtIndex(int index) {
        if(list.size() == 0 || index >= list.size() || index < 0)
            return;
        list.remove(index);
    }
}

*/