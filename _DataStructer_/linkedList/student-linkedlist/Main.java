public class Main {
  public static void main(String[] args) {
      SortedLinkedList studentList = new SortedLinkedList();

      studentList.addStudent(new Student(101, "student_101"));
      studentList.addStudent(new Student(102, "student_102"));
      studentList.addStudent(new Student(103, "student_103"));
      studentList.addStudent(new Student(104, "student_104"));
      studentList.addStudent(new Student(105, "student_105"));
      studentList.addStudent(new Student(106, "student_106"));
      studentList.addStudent(new Student(107, "student_107"));
      studentList.addStudent(new Student(108, "student_108"));
      studentList.addStudent(new Student(109, "student_109"));
      studentList.addStudent(new Student(110, "student_110"));

      System.out.println("Initial students:");
      studentList.displayStudents();

      studentList.addStudent(new Student(111, "student_111"));

      System.out.println("\nUpdated students:");
      studentList.displayStudents();

      studentList.updateStudent(103, "student_103_updated");

      System.out.println("\nUpdated students:");
      studentList.displayStudents();

      studentList.deleteStudent(108);

      System.out.println("\nUpdated students:");
      studentList.displayStudents();
  }
}
