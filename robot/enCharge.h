class enCharge : enRoute {

public:
	static enCharge enChargeUnique;

	void avancer();

	void int_peser();

	void rencontrerPlot();

public:
	enCharge();

	static enCharge instance();

	Etat tourner();
};
