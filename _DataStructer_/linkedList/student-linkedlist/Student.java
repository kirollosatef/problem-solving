class Student {
  int universityId;
  String name;

  public Student(int universityId, String name) {
      this.universityId = universityId;
      this.name = name;
  }

  @Override
  public String toString() {
      return "University ID: " + universityId + ", Name: " + name;
  }
}