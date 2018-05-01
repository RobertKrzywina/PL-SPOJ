{
	public static void main(String[] args) throws java.lang.Exception {

        int result = 0;
        BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
        String text;
        while((text = buff.readLine()) != null)
            result += counter(text);

        System.out.println(result);

    }
    static int counter(String text) {
        int result = 0;
        char[] arrayOfChar = text.toCharArray();
        int length = arrayOfChar.length;

        for(int i=0;i<length;i++) {
            if(arrayOfChar[i] == '?')
                result++;
            else if(arrayOfChar[i] == '!')
                result++;
            else if(arrayOfChar[i] == '.') {
                if(i+2 < length && arrayOfChar[i+1] == '.' && arrayOfChar[i+2] == '.') {
                    result++;
                    i+=2;
                }
                else result++;
            }
        }
        
        return result;
    }
}
