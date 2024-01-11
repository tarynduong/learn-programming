import java.util.Scanner;

class StudentApp {
   public static void main(String[] args) {
      Scanner scanner = new Scanner(System.in);
      System.out.print("Enter the number of students: ");
      int numStudents = scanner.nextInt();
      int currentStudent = 0;
      String[] name = new String[numStudents];
      int[] age = new int[numStudents];
      String[] id = new String[numStudents];
      String[][] idxId = new String[numStudents][2];
      int option;
      // System.out.println(id);
      do {
         System.out.println("1. Add a student");
         System.out.println("2. Print all students");
         System.out.println("3. Search students based on their ID");
         System.out.print("Choose one option by entering either number: ");
         option = scanner.nextInt();
         scanner.nextLine();
         String idInput;
         switch (option) {
            case 1:
               if (currentStudent >= numStudents) {
                  System.out.println(
                        "You have reached the limit on the number of students. Please choose the other option.");
                  break;
               }
               System.out.println("The number of current students in the database is: " + currentStudent);
               System.out.println("Start adding a student...");
               boolean isIdUnique = false;
               if (currentStudent > 0) {
                  while (!isIdUnique) {
                     System.out.print("Enter student ID: ");
                     idInput = scanner.nextLine();
                     int pos = searchId(idxId, 0, currentStudent - 1, idInput);
                     if (pos != -1) {
                        System.out.println(idInput + " is already taken. Please enter a different ID.");
                        isIdUnique = false;
                     } else {
                        System.out.println(idInput + " is accepted.");
                        id[currentStudent] = idInput;
                        int newIdx = findIndex(idxId, 0, currentStudent - 1, idInput);
                        System.out.println("The new index is " + newIdx);
                        for (int i = currentStudent; i > newIdx; i--) {
                           idxId[i][0] = idxId[i - 1][0];
                           idxId[i][1] = idxId[i - 1][1];
                        }
                        idxId[newIdx][0] = String.valueOf(newIdx);
                        idxId[newIdx][1] = idInput;
                        System.out.println("The current sorted matrix is: ");
                        for (int i = 0; i < idxId.length; i++) {
                           for (int j = 0; j < idxId[0].length; j++) {
                              System.out.print(idxId[i][j] + " ");
                           }
                           System.out.print("\n");
                        }
                        isIdUnique = true;
                     }
                  }
               } else {
                  System.out.print("Enter student ID: ");
                  idInput = scanner.nextLine();
                  idxId[currentStudent][0] = String.valueOf(currentStudent);
                  idxId[currentStudent][1] = idInput;
                  id[currentStudent] = idInput;
               }
               System.out.print("Enter student name: ");
               name[currentStudent] = scanner.nextLine();
               System.out.print("Enter student age: ");
               age[currentStudent] = scanner.nextInt();
               currentStudent++;
               break;
            case 2:
               System.out.println("Printing all students...");
               System.out.println(id);
               for (int i = 0; i < currentStudent; i++) {
                  System.out.println(id[i] + ", " + name[i] + ", " + age[i]);
               }
               break;
            case 3:
               System.out.print("Enter student ID: ");
               idInput = scanner.nextLine();
               System.out.println("The current sorted matrix is: ");
               for (int i = 0; i < idxId.length; i++) {
                  for (int j = 0; j < idxId[0].length; j++) {
                     System.out.print(idxId[i][j] + " ");
                  }
                  System.out.print("\n");
               }
               int index = searchId(idxId, 0, currentStudent - 1, idInput);
               if (index != -1) {
                  System.out.print("Student with ID " + idInput + " is: ");
                  System.out.println(name[Integer.parseInt(idxId[index][0])] + ", "
                        + age[Integer.parseInt(idxId[index][0])]);
               } else {
                  System.out.println("There is no student with ID of " + idInput);
               }
               break;
         }
      } while (option < 4);
      System.out.println("There is no option " + option);
      scanner.close();
   }
   /**
    * Find the position to insert new id_number
    * @param matrix
    * @param low
    * @param high
    * @param key
    * @return the index
   */
   static int findIndex(String[][] matrix, int low, int high, String key) {
      if (low <= high) {
         int mid = (low + high) / 2;
         if (matrix[mid][1].equals(key)) {
            return mid;
         } else if (matrix[mid][1].compareTo(key) < 0) {
            return findIndex(matrix, mid + 1, high, key);
         } else {
            return findIndex(matrix, low, mid - 1, key);
         }
      }
      return low;
   }
   /**
    * Check whether the new id_number has existed in the list yet
    * @param matrix
    * @param low
    * @param high
    * @param key
    * @return the position of the id_number
   */
   static int searchId(String[][] matrix, int low, int high, String key) {
      if (low <= high) {
         int mid = (low + high) / 2;
         if (matrix[mid][1].equals(key)) {
            return mid;
         } else if (matrix[mid][1].compareTo(key) < 0) {
            return searchId(matrix, mid + 1, high, key);
         } else {
            return searchId(matrix, low, mid - 1, key);
         }
      }
      return -1;
   }
}
