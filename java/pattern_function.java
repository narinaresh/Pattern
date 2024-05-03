class invertedlefhalfpyramid {
    public static void main(String args[]) {
        int j;
        for (int i = 1; i <= 5; i++) {
            for (j = 5; j >= i; j--) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}