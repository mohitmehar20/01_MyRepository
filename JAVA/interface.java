interface monkey {
	void jump();
}

interface fish {
	void swim();
}

class human implements monkey, fish {

	public void jump() {
		System.out.println("Jumping");
	}

	public void swim() {
		System.out.println("swimming");
	}

}

	public class interface{

	public static void main(String[] args) {
		human h1 = new human();
		h1.jump();
		h1.swim();

	@Override
	String toString() {
		return "human []";
	}
}

}