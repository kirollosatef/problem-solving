class SortedLinkedList {
  private Node head;

  public SortedLinkedList() {
      this.head = null;
  }

  public void addStudent(Student student) {
      Node newNode = new Node(student);
      
      if (head == null || student.universityId < head.data.universityId) {
          newNode.next = head;
          head = newNode;
      } else {
          Node current = head;
          while (current.next != null && current.next.data.universityId < student.universityId) {
              current = current.next;
          }
          newNode.next = current.next;
          current.next = newNode;
      }
  }

  public void deleteStudent(int universityId) {
      if (head == null) {
          return;
      }

      if (head.data.universityId == universityId) {
          head = head.next;
          return;
      }

      Node current = head;
      while (current.next != null && current.next.data.universityId != universityId) {
          current = current.next;
      }

      if (current.next != null) {
          current.next = current.next.next;
      }
  }

  public void updateStudent(int universityId, String newName) {
      Node current = head;
      while (current != null && current.data.universityId != universityId) {
          current = current.next;
      }

      if (current != null) {
          current.data.name = newName;
      }
  }

  public void displayStudents() {
      Node current = head;
      while (current != null) {
          System.out.println(current.data);
          current = current.next;
      }
  }
}
