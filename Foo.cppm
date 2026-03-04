module;

struct A {};

struct B {
	int x;
	A   a;
	constexpr B(char *) { x = int(); }
	~B();
};

struct C {
	B b = "";
} inline c{};

export module foo;
