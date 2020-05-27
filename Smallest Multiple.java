import java.util.*;
public class Cp{
	static Scanner sc = new Scanner(System.in);
	public static void main(String[]args){
	int res = 1;
	for(int i = 2 ; i <= 20 ; i++){
		res = lcm(res, i);
	}
	System.out.print(res);
	
}
static int lcm(int x , int y){
	return x * (y/gcd(x,y));
}
static int gcd(int x, int y){
	while(x != 0 ){
	int z = x; 
	x = y % x;
	y = z;
}
	return y;
}
}
