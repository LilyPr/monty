0x19. C - Stacks, Queues - LIFO,FIFO.C

STACKS AND QUEUES
Stack:
In the pushdown stacks only two operations are allowed: push the item into the stack, and pop the item out of the
stack. A stack is a limited access data structure - elements can be added and removed from the stack only at the top.
push adds an item to the top of the stack, pop removes the item from the top.
enqueue and dequeue.
Enqueue means to insert an item into the back of the queue, dequeue means removing the
front item.
In a stack we remove the item the most recently added; in a queue, we remove the item the least recently added.

Difference between Stack and Queue Data Structures
Stack:- A stack is a linear data structure in which elements can be inserted and deleted only from one
side of the list, called the top. A stack follows the LIFO (Last In First Out) principle, i.e., the element
inserted at the last is the first element to come out. The insertion of an element into stack is
called push operation, and deletion of an element from the stack is called pop operation. In stack we
always keep track of the last element present in the list with a pointer called top.

Queue:- A queue is a linear data structure in which elements can be inserted only from one side of the
list called rear, and the elements can be deleted only from the other side called the front. The queue data
structure follows the FIFO (First In First Out) principle, i.e. the element inserted at first in the list, is the
first element to be removed from the list. The insertion of an element in a queue is called
an enqueue operation and the deletion of an element is called a dequeue operation. In queue we always
maintain two pointers, one pointing to the element which was inserted at the first and still present in the
list with the front pointer and the second pointer pointing to the element inserted at the last with
the rear pointer.

Adding an element onto the stack (push operation)
1. begin
2. if top = n then stack full
3. top = top + 1
4. stack (top) : = item;
5. end

Deletion of an element from a stack (Pop operation)
1. begin
2. if top = 0 then stack empty;
3. item := stack(top);
4. top = top - 1;
5. end;

PEEK (STACK, TOP)
1. Begin
2. if top = -1 then stack empty
3. item = stack[top]
4. return item
5. End

 insert any element in a queue
Step 1: IF REAR = MAX - 1
Write OVERFLOW
Go to step
[END OF IF]
o Step 2: IF FRONT = -1 and REAR = -1
SET FRONT = REAR = 0
ELSE
SET REAR = REAR + 1
[END OF IF]
o Step 3: Set QUEUE[REAR] = NUM
o Step 4: EXIT

delete an element from the queue
Step 1: IF FRONT = -1 or FRONT > REAR
Write UNDERFLOW
ELSE
SET VAL = QUEUE[FRONT]
SET FRONT = FRONT + 1
[END OF IF]
o Step 2: EXIT

Operation on Linked Queue
1. ptr -> data = item;
2. if(front == NULL)
3. {
4. front = ptr;
5. rear = ptr;
6. front -> next = NULL;
7. rear -> next = NULL;
8. }
In the second case, the queue contains more than one element. The condition front = NULL becomes false. In this
scenario, we need to update the end pointer rear so that the next pointer of rear will point to the new node ptr.
Since, this is a linked queue, hence we also need to make the rear pointer point to the newly added node ptr. We
also need to make the next pointer of rear point to NULL.
1. rear -> next = ptr;
2. rear = ptr;
3. rear->next = NULL;

Step 1: Allocate the space for the new node PTR
o Step 2: SET PTR -> DATA = VAL
o Step 3: IF FRONT = NULL
SET FRONT = REAR = PTR
SET FRONT -> NEXT = REAR -> NEXT = NULL
ELSE
SET REAR -> NEXT = PTR
SET REAR = PTR
SET REAR -> NEXT = NULL
[END OF IF]
o Step 4: END

Deletion
1. ptr = front;
2. front = front -> next;
3. free(ptr)

Algorithm
o Step 1: IF FRONT = NULL
Write " Underflow "
Go to Step 5
[END OF IF]
o Step 2: SET PTR = FRONT
o Step 3: SET FRONT = FRONT -> NEXT
o Step 4: FREE PTR
o Step 5: END

Insertion in Circular queue
There are three scenario of inserting an element in a queue.
1. If (rear + 1)%maxsize = front, the queue is full. In that case, overflow occurs and therefore, insertion
can not be performed in the queue.
2. If rear != max - 1, then rear will be incremented to the mod(maxsize) and the new value will be
inserted at the rear end of the queue.
3. If front != 0 and rear = max - 1, then it means that queue is not full therefore, set the value of rear to
0 and insert the new element there.
Algorithm to insert an element in circular queue
o Step 1: IF (REAR+1)%MAX = FRONT
Write " OVERFLOW "
Goto step 4
[End OF IF]
o Step 2: IF FRONT = -1 and REAR = -1
SET FRONT = REAR = 0
ELSE IF REAR = MAX - 1 and FRONT ! = 0
SET REAR = 0
ELSE
SET REAR = (REAR + 1) % MAX
[END OF IF]
o Step 3: SET QUEUE[REAR] = VAL
o Step 4: EXIT

Algorithm to delete an element from a circular queue
To delete an element from the circular queue, we must check for the three following conditions.
1. If front = -1, then there are no elements in the queue and therefore this will be the case of an underflow
condition.
2. If there is only one element in the queue, in this case, the condition rear = front holds and therefore, both
are set to -1 and the queue is deleted completely.
3. If front = max -1 then, the value is deleted from the front end the value of front is set to 0.
4. Otherwise, the value of front is incremented by 1 and then delete the element at the front end.
Algorithm
o Step 1: IF FRONT = -1
Write " UNDERFLOW "
Goto Step 4
[END of IF]
o Step 2: SET VAL = QUEUE[FRONT]
o Step 3: IF FRONT = REAR
SET FRONT = REAR = -1
ELSE
IF FRONT = MAX -1
SET FRONT = 0
ELSE
SET FRONT = FRONT + 1
[END of IF]
[END OF IF]
o Step 4: EXIT
Priority Queue
a priority queue is an abstract data type which is like a regular queue or stack data structure, but where additionally
each element has a "priority" associated with it. In a priority queue, an element with high priority is served before an
element with low priority. In some implementations, if two elements have the same priority, they are served according
to the order in which they were enqueued, while in other implementations, ordering of elements with the same priority
is undefined.
OR
Priority Queue is an extension of queue with following properties.
1. Every item has a priority associated with it.
2. An element with high priority is dequeued before an element with low priority.
3. If two elements have the same priority, they are served according to their order in the queque

