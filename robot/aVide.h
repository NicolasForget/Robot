class aVide : enRoute {

public:
	static aVide aVideUnique;

	void avancer();

	void rencontrerPlot();

public:
	aVide();

	static aVide instance();

	Etat tourner();
};
