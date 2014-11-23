class enChargeFacePlot : enRoute {

public:
	static enChargeFacePlot enChargeFacePlotUnique;

	void poser();

	void int_peser();

public:
	enChargeFacePlot();

	static enChargeFacePlot instance();

	Etat tourner();
};
