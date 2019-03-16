// generated from file './/bajatubedriver.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)

#include "bajatubedriver_neg_table.h"
#include "bajatubedriver_table.h"
#include "math.h"

namespace bajatubedriver {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec2[2];
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec13[2];
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fRec14[6];
	double 	fVec0[2];
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fRec12[2];
	double 	fRec11[3];
	double 	fVec1[2];
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fRec10[2];
	double 	fRec9[3];
	double 	fVec2[2];
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fRec8[2];
	double 	fRec7[3];
	double 	fVec3[2];
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fRec6[2];
	double 	fRec5[3];
	double 	fConst74;
	double 	fRec4[2];
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fRec18[2];
	double 	fRec17[3];
	double 	fConst81;
	double 	fRec16[3];
	double 	fRec15[2];
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fRec23[2];
	double 	fRec22[3];
	double 	fConst85;
	double 	fRec21[3];
	double 	fRec20[3];
	double 	fRec19[2];
	double 	fRec3[2];
	double 	fConst86;
	double 	fRec1[2];

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "bajatubedriver";
	name = N_("BaJaTubeDriver");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec13[i] = 0;
	for (int i=0; i<6; i++) fRec14[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec12[i] = 0;
	for (int i=0; i<3; i++) fRec11[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
	for (int i=0; i<3; i++) fRec9[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec8[i] = 0;
	for (int i=0; i<3; i++) fRec7[i] = 0;
	for (int i=0; i<2; i++) fVec3[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<3; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec18[i] = 0;
	for (int i=0; i<3; i++) fRec17[i] = 0;
	for (int i=0; i<3; i++) fRec16[i] = 0;
	for (int i=0; i<2; i++) fRec15[i] = 0;
	for (int i=0; i<2; i++) fRec23[i] = 0;
	for (int i=0; i<3; i++) fRec22[i] = 0;
	for (int i=0; i<3; i++) fRec21[i] = 0;
	for (int i=0; i<3; i++) fRec20[i] = 0;
	for (int i=0; i<2; i++) fRec19[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = min(1.92e+05, max(1.0, (double)fSamplingFreq));
	fConst1 = double(fConst0);
	fConst2 = (2.24914085283282e-06 * fConst1);
	fConst3 = (0 - (0.112461932029384 + fConst2));
	fConst4 = (2.6891901501262e-06 * fConst1);
	fConst5 = (fConst4 - 0.99009478393055);
	fConst6 = (2.91410423540948e-07 * fConst1);
	fConst7 = (1.47162430127362 + fConst6);
	fConst8 = (0.99009478393055 + fConst4);
	fConst9 = (fConst2 - 0.112461932029384);
	fConst10 = (1.47162430127362 - fConst6);
	fConst11 = (2.03816131830009e-05 * fConst1);
	fConst12 = (0.0216825672159584 + fConst11);
	fConst13 = ((0.0216825672159584 - fConst11) / fConst12);
	fConst14 = (2.0682972551596e-05 * fConst1);
	fConst15 = (0.00721731752339018 + fConst14);
	fConst16 = ((0.00721731752339018 - fConst14) / fConst15);
	fConst17 = tan((270.1769682087222 / fConst0));
	fConst18 = (1.0 / fConst17);
	fConst19 = (1 + ((fConst18 - 1.0000000000000004) / fConst17));
	fConst20 = (1.0 / faustpower<2>(fConst17));
	fConst21 = (2 * (1 - fConst20));
	fConst22 = (1.0 / (1 + ((fConst18 + 1.0000000000000004) / fConst17)));
	fConst23 = tan((659.7344572538566 / fConst0));
	fConst24 = (1.0 / fConst23);
	fConst25 = (1 + ((fConst24 - 1.0000000000000004) / fConst23));
	fConst26 = (1.0 / faustpower<2>(fConst23));
	fConst27 = (2 * (1 - fConst26));
	fConst28 = (1 + ((fConst24 + 1.0000000000000004) / fConst23));
	fConst29 = (1.0 / fConst28);
	fConst30 = tan((3769.9111843077517 / fConst0));
	fConst31 = (1.0 / faustpower<2>(fConst30));
	fConst32 = (2 * (1 - fConst31));
	fConst33 = (1.0 / fConst30);
	fConst34 = (1 + ((fConst33 - 1.0000000000000004) / fConst30));
	fConst35 = (1 + ((fConst33 + 1.0000000000000004) / fConst30));
	fConst36 = (1.0 / fConst35);
	fConst37 = tan((20517.741620594938 / fConst0));
	fConst38 = (2 * (1 - (1.0 / faustpower<2>(fConst37))));
	fConst39 = (1.0 / fConst37);
	fConst40 = (1 + ((fConst39 - 1.0000000000000004) / fConst37));
	fConst41 = (1 + ((1.0000000000000004 + fConst39) / fConst37));
	fConst42 = (1.0 / fConst41);
	fConst43 = (1.45284077923968e-26 * fConst1);
	fConst44 = (8.74279694529759e-17 + (fConst1 * (7.18708786341519e-16 + (fConst1 * (6.97522236873734e-17 + (fConst1 * (2.69471797250462e-19 + fConst43)))))));
	fConst45 = (2.90568155847935e-28 * fConst1);
	fConst46 = (5.48146563373846e-12 + (fConst1 * (5.34477320715169e-13 + (fConst1 * (2.24699083136596e-15 + (fConst1 * (5.51050600994588e-21 + fConst45)))))));
	fConst47 = ((fConst1 * (7.18708786341519e-16 + (fConst1 * ((fConst1 * (2.69471797250462e-19 - fConst43)) - 6.97522236873734e-17)))) - 8.74279694529759e-17);
	fConst48 = ((fConst1 * (5.34477320715169e-13 + (fConst1 * ((fConst1 * (5.51050600994588e-21 - fConst45)) - 2.24699083136596e-15)))) - 5.48146563373846e-12);
	fConst49 = (7.26420389619839e-26 * fConst1);
	fConst50 = ((fConst1 * (7.18708786341519e-16 + (fConst1 * (6.97522236873734e-17 + (fConst1 * (fConst49 - 8.08415391751386e-19)))))) - 2.62283908358928e-16);
	fConst51 = (1.45284077923968e-27 * fConst1);
	fConst52 = ((fConst1 * (5.34477320715169e-13 + (fConst1 * (2.24699083136596e-15 + (fConst1 * (fConst51 - 1.65315180298376e-20)))))) - 1.64443969012154e-11);
	fConst53 = (1.45284077923968e-25 * fConst1);
	fConst54 = ((fConst1 * ((fConst1 * (1.39504447374747e-16 + (fConst1 * (5.38943594500924e-19 - fConst53)))) - 1.43741757268304e-15)) - 1.74855938905952e-16);
	fConst55 = (2.90568155847935e-27 * fConst1);
	fConst56 = ((fConst1 * ((fConst1 * (4.49398166273193e-15 + (fConst1 * (1.10210120198918e-20 - fConst55)))) - 1.06895464143034e-12)) - 1.09629312674769e-11);
	fConst57 = (1.74855938905952e-16 + (fConst1 * ((fConst1 * ((fConst1 * (5.38943594500924e-19 + fConst53)) - 1.39504447374747e-16)) - 1.43741757268304e-15)));
	fConst58 = (1.09629312674769e-11 + (fConst1 * ((fConst1 * ((fConst1 * (1.10210120198918e-20 + fConst55)) - 4.49398166273193e-15)) - 1.06895464143034e-12)));
	fConst59 = (2.62283908358928e-16 + (fConst1 * (7.18708786341519e-16 + (fConst1 * ((fConst1 * (0 - (8.08415391751386e-19 + fConst49))) - 6.97522236873734e-17)))));
	fConst60 = (1.64443969012154e-11 + (fConst1 * (5.34477320715169e-13 + (fConst1 * ((fConst1 * (0 - (1.65315180298376e-20 + fConst51))) - 2.24699083136596e-15)))));
	fConst61 = (1 + fConst39);
	fConst62 = (faustpower<3>(fConst1) / fConst61);
	fConst63 = (0 - ((1 - fConst39) / fConst61));
	fConst64 = (1 + fConst33);
	fConst65 = (1.0 / (fConst64 * fConst41));
	fConst66 = (0 - ((1 - fConst33) / fConst64));
	fConst67 = (1 + fConst24);
	fConst68 = (1.0 / (fConst67 * fConst35));
	fConst69 = (0 - ((1 - fConst24) / fConst67));
	fConst70 = (0 - fConst18);
	fConst71 = (1 + fConst18);
	fConst72 = (1.0 / (fConst71 * fConst28));
	fConst73 = (0 - ((1 - fConst18) / fConst71));
	fConst74 = (2 * (0 - fConst20));
	fConst75 = (2.64722259803455e-05 * fConst1);
	fConst76 = (0 - fConst75);
	fConst77 = (1.0 / fConst15);
	fConst78 = (1 + ((fConst18 - 1.0) / fConst17));
	fConst79 = (1.0 / (1 + ((1.0 + fConst18) / fConst17)));
	fConst80 = (0 - fConst24);
	fConst81 = (2 * (0 - fConst26));
	fConst82 = (1 + ((fConst24 - 1.0) / fConst23));
	fConst83 = (1.0 / (1 + ((1.0 + fConst24) / fConst23)));
	fConst84 = (0 - fConst33);
	fConst85 = (2 * (0 - fConst31));
	fConst86 = (1.0 / fConst12);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	double 	fSlow2 = (0.00036676987543879196 * (exp((3 * double(fslider2))) - 1));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.993 * fRec0[1]));
		double fTemp0 = (fConst7 + (fRec0[0] * (fConst5 + (fConst3 * fRec0[0]))));
		fRec2[0] = (fSlow1 + (0.993 * fRec2[1]));
		fRec13[0] = (fSlow2 + (0.993 * fRec13[1]));
		double fTemp1 = (6.15690879602922e-13 + (fConst1 * (fConst46 + (fConst44 * fRec13[0]))));
		double fTemp2 = (2.24087296298981e-14 + (1.12043648149491e-12 * fRec13[0]));
		fRec14[0] = ((double)input0[i] - ((((((fRec14[1] * (3.07845439801461e-12 + (fConst1 * (fConst60 + (fConst59 * fRec13[0]))))) + (fRec14[2] * (6.15690879602922e-12 + (fConst1 * (fConst58 + (fConst57 * fRec13[0])))))) + (fRec14[3] * (6.15690879602922e-12 + (fConst1 * (fConst56 + (fConst54 * fRec13[0])))))) + (fRec14[4] * (3.07845439801461e-12 + (fConst1 * (fConst52 + (fConst50 * fRec13[0])))))) + (fRec14[5] * (6.15690879602922e-13 + (fConst1 * (fConst48 + (fConst47 * fRec13[0])))))) / fTemp1));
		double fTemp3 = (1.12043648149491e-14 + (5.60218240747454e-13 * fRec13[0]));
		double fTemp4 = (((fTemp3 * (fRec14[1] + fRec14[5])) + (((0 - fTemp3) * (fRec14[4] + fRec14[0])) + ((fRec14[2] * fTemp2) + (fRec14[3] * (0 - fTemp2))))) / fTemp1);
		fVec0[0] = fTemp4;
		fRec12[0] = ((fConst63 * fRec12[1]) + (fConst62 * (fVec0[0] + fVec0[1])));
		fRec11[0] = (fRec12[0] - (fConst42 * ((fConst40 * fRec11[2]) + (fConst38 * fRec11[1]))));
		double fTemp5 = (fRec11[0] + (fRec11[2] + (2 * fRec11[1])));
		fVec1[0] = fTemp5;
		fRec10[0] = ((fConst66 * fRec10[1]) + (fConst65 * (fVec1[0] + fVec1[1])));
		fRec9[0] = (fRec10[0] - (fConst36 * ((fConst34 * fRec9[2]) + (fConst32 * fRec9[1]))));
		double fTemp6 = (fRec9[0] + (fRec9[2] + (2 * fRec9[1])));
		fVec2[0] = fTemp6;
		fRec8[0] = ((fConst69 * fRec8[1]) + (fConst68 * (fVec2[0] + fVec2[1])));
		fRec7[0] = (fRec8[0] - (fConst29 * ((fConst27 * fRec7[1]) + (fConst25 * fRec7[2]))));
		double fTemp7 = (fRec7[0] + (fRec7[2] + (2 * fRec7[1])));
		fVec3[0] = fTemp7;
		fRec6[0] = ((fConst73 * fRec6[1]) + (fConst72 * ((fConst18 * fVec3[0]) + (fConst70 * fVec3[1]))));
		fRec5[0] = (fRec6[0] - (fConst22 * ((fConst21 * fRec5[1]) + (fConst19 * fRec5[2]))));
		fRec4[0] = ((fConst22 * ((fConst74 * fRec5[1]) + (fConst20 * (fRec5[2] + fRec5[0])))) - (fConst16 * fRec4[1]));
		double fTemp8 = (fConst77 * ((fConst76 * fRec4[1]) + (fConst75 * fRec4[0])));
		double fTemp9 = (fConst21 * fRec16[1]);
		fRec18[0] = ((fConst69 * fRec18[1]) + (fConst68 * ((fConst24 * fVec2[0]) + (fConst80 * fVec2[1]))));
		fRec17[0] = (fRec18[0] - (fConst29 * ((fConst27 * fRec17[1]) + (fConst25 * fRec17[2]))));
		fRec16[0] = ((fConst29 * ((fConst81 * fRec17[1]) + (fConst26 * (fRec17[2] + fRec17[0])))) - (fConst79 * ((fConst78 * fRec16[2]) + fTemp9)));
		fRec15[0] = ((fRec16[2] + (fConst79 * (fTemp9 + (fConst78 * fRec16[0])))) - (fConst16 * fRec15[1]));
		double fTemp10 = (fConst77 * ((fConst76 * fRec15[1]) + (fConst75 * fRec15[0])));
		double fTemp11 = (fConst21 * fRec20[1]);
		double fTemp12 = (fConst27 * fRec21[1]);
		fRec23[0] = ((fConst66 * fRec23[1]) + (fConst65 * ((fConst33 * fVec1[0]) + (fConst84 * fVec1[1]))));
		fRec22[0] = (fRec23[0] - (fConst36 * ((fConst34 * fRec22[2]) + (fConst32 * fRec22[1]))));
		fRec21[0] = ((fConst36 * ((fConst85 * fRec22[1]) + (fConst31 * (fRec22[2] + fRec22[0])))) - (fConst83 * ((fConst82 * fRec21[2]) + fTemp12)));
		fRec20[0] = ((fRec21[2] + (fConst83 * (fTemp12 + (fConst82 * fRec21[0])))) - (fConst79 * ((fConst78 * fRec20[2]) + fTemp11)));
		fRec19[0] = ((fRec20[2] + (fConst79 * (fTemp11 + (fConst78 * fRec20[0])))) - (fConst16 * fRec19[1]));
		double fTemp13 = (fConst77 * ((fConst76 * fRec19[1]) + (fConst75 * fRec19[0])));
		fRec3[0] = (((((int(std::signbit(fTemp13)))?bajatubedriver_negclip(fTemp13):bajatubedriverclip(fTemp13)) + ((int(std::signbit(fTemp10)))?bajatubedriver_negclip(fTemp10):bajatubedriverclip(fTemp10))) + ((int(std::signbit(fTemp8)))?bajatubedriver_negclip(fTemp8):bajatubedriverclip(fTemp8))) - (fConst13 * fRec3[1]));
		fRec1[0] = ((fConst86 * ((fRec3[0] * (0.0216825672159584 + (fConst11 * fRec2[0]))) + (fRec3[1] * (0.0216825672159584 + (fConst1 * (0 - (2.03816131830009e-05 * fRec2[0]))))))) - ((fRec1[1] * (fConst10 + (fRec0[0] * ((fConst9 * fRec0[0]) - fConst8)))) / fTemp0));
		output0[i] = (FAUSTFLOAT)((((fRec0[0] * ((0.488938774271564 * fRec0[0]) - 1.61349795509616)) - 0.166239183252332) * (fRec1[1] + fRec1[0])) / fTemp0);
		// post processing
		fRec1[1] = fRec1[0];
		fRec3[1] = fRec3[0];
		fRec19[1] = fRec19[0];
		fRec20[2] = fRec20[1]; fRec20[1] = fRec20[0];
		fRec21[2] = fRec21[1]; fRec21[1] = fRec21[0];
		fRec22[2] = fRec22[1]; fRec22[1] = fRec22[0];
		fRec23[1] = fRec23[0];
		fRec15[1] = fRec15[0];
		fRec16[2] = fRec16[1]; fRec16[1] = fRec16[0];
		fRec17[2] = fRec17[1]; fRec17[1] = fRec17[0];
		fRec18[1] = fRec18[0];
		fRec4[1] = fRec4[0];
		fRec5[2] = fRec5[1]; fRec5[1] = fRec5[0];
		fRec6[1] = fRec6[0];
		fVec3[1] = fVec3[0];
		fRec7[2] = fRec7[1]; fRec7[1] = fRec7[0];
		fRec8[1] = fRec8[0];
		fVec2[1] = fVec2[0];
		fRec9[2] = fRec9[1]; fRec9[1] = fRec9[0];
		fRec10[1] = fRec10[0];
		fVec1[1] = fVec1[0];
		fRec11[2] = fRec11[1]; fRec11[1] = fRec11[0];
		fRec12[1] = fRec12[0];
		fVec0[1] = fVec0[0];
		for (int i=5; i>0; i--) fRec14[i] = fRec14[i-1];
		fRec13[1] = fRec13[0];
		fRec2[1] = fRec2[0];
		fRec0[1] = fRec0[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case DRIVE: 
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TONE: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   DRIVE, 
   TONE, 
   VOLUME, 
} PortIndex;
*/

} // end namespace bajatubedriver
