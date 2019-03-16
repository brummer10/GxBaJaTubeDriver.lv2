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
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec15[2];
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
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fRec16[6];
	double 	fVec0[2];
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fRec14[2];
	double 	fRec13[3];
	double 	fVec1[2];
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fRec12[2];
	double 	fRec11[3];
	double 	fVec2[2];
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fRec10[2];
	double 	fRec9[3];
	double 	fVec3[2];
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fRec8[2];
	double 	fRec7[3];
	double 	fVec4[2];
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fRec6[2];
	double 	fRec5[3];
	double 	fConst84;
	double 	fRec4[2];
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fRec20[2];
	double 	fRec19[3];
	double 	fConst91;
	double 	fRec18[3];
	double 	fRec17[2];
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	double 	fRec25[2];
	double 	fRec24[3];
	double 	fConst95;
	double 	fRec23[3];
	double 	fRec22[3];
	double 	fRec21[2];
	double 	fConst96;
	double 	fConst97;
	double 	fConst98;
	double 	fRec31[2];
	double 	fRec30[3];
	double 	fConst99;
	double 	fRec29[3];
	double 	fRec28[3];
	double 	fRec27[3];
	double 	fRec26[2];
	double 	fRec3[2];
	double 	fConst100;
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
	for (int i=0; i<2; i++) fRec15[i] = 0;
	for (int i=0; i<6; i++) fRec16[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec14[i] = 0;
	for (int i=0; i<3; i++) fRec13[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec12[i] = 0;
	for (int i=0; i<3; i++) fRec11[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
	for (int i=0; i<3; i++) fRec9[i] = 0;
	for (int i=0; i<2; i++) fVec3[i] = 0;
	for (int i=0; i<2; i++) fRec8[i] = 0;
	for (int i=0; i<3; i++) fRec7[i] = 0;
	for (int i=0; i<2; i++) fVec4[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<3; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec20[i] = 0;
	for (int i=0; i<3; i++) fRec19[i] = 0;
	for (int i=0; i<3; i++) fRec18[i] = 0;
	for (int i=0; i<2; i++) fRec17[i] = 0;
	for (int i=0; i<2; i++) fRec25[i] = 0;
	for (int i=0; i<3; i++) fRec24[i] = 0;
	for (int i=0; i<3; i++) fRec23[i] = 0;
	for (int i=0; i<3; i++) fRec22[i] = 0;
	for (int i=0; i<2; i++) fRec21[i] = 0;
	for (int i=0; i<2; i++) fRec31[i] = 0;
	for (int i=0; i<3; i++) fRec30[i] = 0;
	for (int i=0; i<3; i++) fRec29[i] = 0;
	for (int i=0; i<3; i++) fRec28[i] = 0;
	for (int i=0; i<3; i++) fRec27[i] = 0;
	for (int i=0; i<2; i++) fRec26[i] = 0;
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
	fConst30 = tan((1884.9555921538758 / fConst0));
	fConst31 = (1.0 / fConst30);
	fConst32 = (1 + ((fConst31 - 1.0000000000000004) / fConst30));
	fConst33 = (1.0 / faustpower<2>(fConst30));
	fConst34 = (2 * (1 - fConst33));
	fConst35 = (1 + ((fConst31 + 1.0000000000000004) / fConst30));
	fConst36 = (1.0 / fConst35);
	fConst37 = tan((3769.9111843077517 / fConst0));
	fConst38 = (1.0 / faustpower<2>(fConst37));
	fConst39 = (2 * (1 - fConst38));
	fConst40 = (1.0 / fConst37);
	fConst41 = (1 + ((fConst40 - 1.0000000000000004) / fConst37));
	fConst42 = (1 + ((fConst40 + 1.0000000000000004) / fConst37));
	fConst43 = (1.0 / fConst42);
	fConst44 = tan((20517.741620594938 / fConst0));
	fConst45 = (2 * (1 - (1.0 / faustpower<2>(fConst44))));
	fConst46 = (1.0 / fConst44);
	fConst47 = (1 + ((fConst46 - 1.0000000000000004) / fConst44));
	fConst48 = (1 + ((1.0000000000000004 + fConst46) / fConst44));
	fConst49 = (1.0 / fConst48);
	fConst50 = (1.45284077923968e-26 * fConst1);
	fConst51 = (8.74279694529759e-17 + (fConst1 * (7.18708786341519e-16 + (fConst1 * (6.97522236873734e-17 + (fConst1 * (2.69471797250462e-19 + fConst50)))))));
	fConst52 = (2.90568155847935e-28 * fConst1);
	fConst53 = (5.48146563373846e-12 + (fConst1 * (5.34477320715169e-13 + (fConst1 * (2.24699083136596e-15 + (fConst1 * (5.51050600994588e-21 + fConst52)))))));
	fConst54 = ((fConst1 * (7.18708786341519e-16 + (fConst1 * ((fConst1 * (2.69471797250462e-19 - fConst50)) - 6.97522236873734e-17)))) - 8.74279694529759e-17);
	fConst55 = ((fConst1 * (5.34477320715169e-13 + (fConst1 * ((fConst1 * (5.51050600994588e-21 - fConst52)) - 2.24699083136596e-15)))) - 5.48146563373846e-12);
	fConst56 = (7.26420389619839e-26 * fConst1);
	fConst57 = ((fConst1 * (7.18708786341519e-16 + (fConst1 * (6.97522236873734e-17 + (fConst1 * (fConst56 - 8.08415391751386e-19)))))) - 2.62283908358928e-16);
	fConst58 = (1.45284077923968e-27 * fConst1);
	fConst59 = ((fConst1 * (5.34477320715169e-13 + (fConst1 * (2.24699083136596e-15 + (fConst1 * (fConst58 - 1.65315180298376e-20)))))) - 1.64443969012154e-11);
	fConst60 = (1.45284077923968e-25 * fConst1);
	fConst61 = ((fConst1 * ((fConst1 * (1.39504447374747e-16 + (fConst1 * (5.38943594500924e-19 - fConst60)))) - 1.43741757268304e-15)) - 1.74855938905952e-16);
	fConst62 = (2.90568155847935e-27 * fConst1);
	fConst63 = ((fConst1 * ((fConst1 * (4.49398166273193e-15 + (fConst1 * (1.10210120198918e-20 - fConst62)))) - 1.06895464143034e-12)) - 1.09629312674769e-11);
	fConst64 = (1.74855938905952e-16 + (fConst1 * ((fConst1 * ((fConst1 * (5.38943594500924e-19 + fConst60)) - 1.39504447374747e-16)) - 1.43741757268304e-15)));
	fConst65 = (1.09629312674769e-11 + (fConst1 * ((fConst1 * ((fConst1 * (1.10210120198918e-20 + fConst62)) - 4.49398166273193e-15)) - 1.06895464143034e-12)));
	fConst66 = (2.62283908358928e-16 + (fConst1 * (7.18708786341519e-16 + (fConst1 * ((fConst1 * (0 - (8.08415391751386e-19 + fConst56))) - 6.97522236873734e-17)))));
	fConst67 = (1.64443969012154e-11 + (fConst1 * (5.34477320715169e-13 + (fConst1 * ((fConst1 * (0 - (1.65315180298376e-20 + fConst58))) - 2.24699083136596e-15)))));
	fConst68 = (1 + fConst46);
	fConst69 = (faustpower<3>(fConst1) / fConst68);
	fConst70 = (0 - ((1 - fConst46) / fConst68));
	fConst71 = (1 + fConst40);
	fConst72 = (1.0 / (fConst71 * fConst48));
	fConst73 = (0 - ((1 - fConst40) / fConst71));
	fConst74 = (1 + fConst31);
	fConst75 = (1.0 / (fConst74 * fConst42));
	fConst76 = (0 - ((1 - fConst31) / fConst74));
	fConst77 = (1 + fConst24);
	fConst78 = (1.0 / (fConst77 * fConst35));
	fConst79 = (0 - ((1 - fConst24) / fConst77));
	fConst80 = (0 - fConst18);
	fConst81 = (1 + fConst18);
	fConst82 = (1.0 / (fConst81 * fConst28));
	fConst83 = (0 - ((1 - fConst18) / fConst81));
	fConst84 = (2 * (0 - fConst20));
	fConst85 = (2.64722259803455e-05 * fConst1);
	fConst86 = (0 - fConst85);
	fConst87 = (1.0 / fConst15);
	fConst88 = (1 + ((fConst18 - 1.0) / fConst17));
	fConst89 = (1.0 / (1 + ((1.0 + fConst18) / fConst17)));
	fConst90 = (0 - fConst24);
	fConst91 = (2 * (0 - fConst26));
	fConst92 = (1 + ((fConst24 - 1.0) / fConst23));
	fConst93 = (1.0 / (1 + ((1.0 + fConst24) / fConst23)));
	fConst94 = (0 - fConst31);
	fConst95 = (2 * (0 - fConst33));
	fConst96 = (1 + ((fConst31 - 1.0) / fConst30));
	fConst97 = (1.0 / (1 + ((1.0 + fConst31) / fConst30)));
	fConst98 = (0 - fConst40);
	fConst99 = (2 * (0 - fConst38));
	fConst100 = (1.0 / fConst12);
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
		fRec15[0] = (fSlow2 + (0.993 * fRec15[1]));
		double fTemp1 = (6.15690879602922e-13 + (fConst1 * (fConst53 + (fConst51 * fRec15[0]))));
		double fTemp2 = (2.24087296298981e-14 + (1.12043648149491e-12 * fRec15[0]));
		fRec16[0] = ((double)input0[i] - ((((((fRec16[1] * (3.07845439801461e-12 + (fConst1 * (fConst67 + (fConst66 * fRec15[0]))))) + (fRec16[2] * (6.15690879602922e-12 + (fConst1 * (fConst65 + (fConst64 * fRec15[0])))))) + (fRec16[3] * (6.15690879602922e-12 + (fConst1 * (fConst63 + (fConst61 * fRec15[0])))))) + (fRec16[4] * (3.07845439801461e-12 + (fConst1 * (fConst59 + (fConst57 * fRec15[0])))))) + (fRec16[5] * (6.15690879602922e-13 + (fConst1 * (fConst55 + (fConst54 * fRec15[0])))))) / fTemp1));
		double fTemp3 = (1.12043648149491e-14 + (5.60218240747454e-13 * fRec15[0]));
		double fTemp4 = (((fTemp3 * (fRec16[1] + fRec16[5])) + (((0 - fTemp3) * (fRec16[4] + fRec16[0])) + ((fRec16[2] * fTemp2) + (fRec16[3] * (0 - fTemp2))))) / fTemp1);
		fVec0[0] = fTemp4;
		fRec14[0] = ((fConst70 * fRec14[1]) + (fConst69 * (fVec0[0] + fVec0[1])));
		fRec13[0] = (fRec14[0] - (fConst49 * ((fConst47 * fRec13[2]) + (fConst45 * fRec13[1]))));
		double fTemp5 = (fRec13[0] + (fRec13[2] + (2 * fRec13[1])));
		fVec1[0] = fTemp5;
		fRec12[0] = ((fConst73 * fRec12[1]) + (fConst72 * (fVec1[0] + fVec1[1])));
		fRec11[0] = (fRec12[0] - (fConst43 * ((fConst41 * fRec11[2]) + (fConst39 * fRec11[1]))));
		double fTemp6 = (fRec11[0] + (fRec11[2] + (2 * fRec11[1])));
		fVec2[0] = fTemp6;
		fRec10[0] = ((fConst76 * fRec10[1]) + (fConst75 * (fVec2[0] + fVec2[1])));
		fRec9[0] = (fRec10[0] - (fConst36 * ((fConst34 * fRec9[1]) + (fConst32 * fRec9[2]))));
		double fTemp7 = (fRec9[0] + (fRec9[2] + (2 * fRec9[1])));
		fVec3[0] = fTemp7;
		fRec8[0] = ((fConst79 * fRec8[1]) + (fConst78 * (fVec3[0] + fVec3[1])));
		fRec7[0] = (fRec8[0] - (fConst29 * ((fConst27 * fRec7[1]) + (fConst25 * fRec7[2]))));
		double fTemp8 = (fRec7[0] + (fRec7[2] + (2 * fRec7[1])));
		fVec4[0] = fTemp8;
		fRec6[0] = ((fConst83 * fRec6[1]) + (fConst82 * ((fConst18 * fVec4[0]) + (fConst80 * fVec4[1]))));
		fRec5[0] = (fRec6[0] - (fConst22 * ((fConst21 * fRec5[1]) + (fConst19 * fRec5[2]))));
		fRec4[0] = ((fConst22 * ((fConst84 * fRec5[1]) + (fConst20 * (fRec5[2] + fRec5[0])))) - (fConst16 * fRec4[1]));
		double fTemp9 = (fConst87 * ((fConst86 * fRec4[1]) + (fConst85 * fRec4[0])));
		double fTemp10 = (fConst21 * fRec18[1]);
		fRec20[0] = ((fConst79 * fRec20[1]) + (fConst78 * ((fConst24 * fVec3[0]) + (fConst90 * fVec3[1]))));
		fRec19[0] = (fRec20[0] - (fConst29 * ((fConst27 * fRec19[1]) + (fConst25 * fRec19[2]))));
		fRec18[0] = ((fConst29 * ((fConst91 * fRec19[1]) + (fConst26 * (fRec19[2] + fRec19[0])))) - (fConst89 * ((fConst88 * fRec18[2]) + fTemp10)));
		fRec17[0] = ((fRec18[2] + (fConst89 * (fTemp10 + (fConst88 * fRec18[0])))) - (fConst16 * fRec17[1]));
		double fTemp11 = (fConst87 * ((fConst86 * fRec17[1]) + (fConst85 * fRec17[0])));
		double fTemp12 = (fConst21 * fRec22[1]);
		double fTemp13 = (fConst27 * fRec23[1]);
		fRec25[0] = ((fConst76 * fRec25[1]) + (fConst75 * ((fConst31 * fVec2[0]) + (fConst94 * fVec2[1]))));
		fRec24[0] = (fRec25[0] - (fConst36 * ((fConst34 * fRec24[1]) + (fConst32 * fRec24[2]))));
		fRec23[0] = ((fConst36 * ((fConst95 * fRec24[1]) + (fConst33 * (fRec24[2] + fRec24[0])))) - (fConst93 * ((fConst92 * fRec23[2]) + fTemp13)));
		fRec22[0] = ((fRec23[2] + (fConst93 * (fTemp13 + (fConst92 * fRec23[0])))) - (fConst89 * ((fConst88 * fRec22[2]) + fTemp12)));
		fRec21[0] = ((fRec22[2] + (fConst89 * (fTemp12 + (fConst88 * fRec22[0])))) - (fConst16 * fRec21[1]));
		double fTemp14 = (fConst87 * ((fConst86 * fRec21[1]) + (fConst85 * fRec21[0])));
		double fTemp15 = (fConst21 * fRec27[1]);
		double fTemp16 = (fConst27 * fRec28[1]);
		double fTemp17 = (fConst34 * fRec29[1]);
		fRec31[0] = ((fConst73 * fRec31[1]) + (fConst72 * ((fConst40 * fVec1[0]) + (fConst98 * fVec1[1]))));
		fRec30[0] = (fRec31[0] - (fConst43 * ((fConst41 * fRec30[2]) + (fConst39 * fRec30[1]))));
		fRec29[0] = ((fConst43 * ((fConst99 * fRec30[1]) + (fConst38 * (fRec30[2] + fRec30[0])))) - (fConst97 * ((fConst96 * fRec29[2]) + fTemp17)));
		fRec28[0] = ((fRec29[2] + (fConst97 * (fTemp17 + (fConst96 * fRec29[0])))) - (fConst93 * ((fConst92 * fRec28[2]) + fTemp16)));
		fRec27[0] = ((fRec28[2] + (fConst93 * (fTemp16 + (fConst92 * fRec28[0])))) - (fConst89 * ((fConst88 * fRec27[2]) + fTemp15)));
		fRec26[0] = ((fRec27[2] + (fConst89 * (fTemp15 + (fConst88 * fRec27[0])))) - (fConst16 * fRec26[1]));
		double fTemp18 = (fConst87 * ((fConst86 * fRec26[1]) + (fConst85 * fRec26[0])));
		fRec3[0] = ((((((int(signbit(fTemp18)))?bajatubedriver_negclip(fTemp18):bajatubedriverclip(fTemp18)) + ((int(signbit(fTemp14)))?bajatubedriver_negclip(fTemp14):bajatubedriverclip(fTemp14))) + ((int(signbit(fTemp11)))?bajatubedriver_negclip(fTemp11):bajatubedriverclip(fTemp11))) + ((int(signbit(fTemp9)))?bajatubedriver_negclip(fTemp9):bajatubedriverclip(fTemp9))) - (fConst13 * fRec3[1]));
		fRec1[0] = ((fConst100 * ((fRec3[0] * (0.0216825672159584 + (fConst11 * fRec2[0]))) + (fRec3[1] * (0.0216825672159584 + (fConst1 * (0 - (2.03816131830009e-05 * fRec2[0]))))))) - ((fRec1[1] * (fConst10 + (fRec0[0] * ((fConst9 * fRec0[0]) - fConst8)))) / fTemp0));
		output0[i] = (FAUSTFLOAT)((((fRec0[0] * ((0.488938774271564 * fRec0[0]) - 1.61349795509616)) - 0.166239183252332) * (fRec1[1] + fRec1[0])) / fTemp0);
		// post processing
		fRec1[1] = fRec1[0];
		fRec3[1] = fRec3[0];
		fRec26[1] = fRec26[0];
		fRec27[2] = fRec27[1]; fRec27[1] = fRec27[0];
		fRec28[2] = fRec28[1]; fRec28[1] = fRec28[0];
		fRec29[2] = fRec29[1]; fRec29[1] = fRec29[0];
		fRec30[2] = fRec30[1]; fRec30[1] = fRec30[0];
		fRec31[1] = fRec31[0];
		fRec21[1] = fRec21[0];
		fRec22[2] = fRec22[1]; fRec22[1] = fRec22[0];
		fRec23[2] = fRec23[1]; fRec23[1] = fRec23[0];
		fRec24[2] = fRec24[1]; fRec24[1] = fRec24[0];
		fRec25[1] = fRec25[0];
		fRec17[1] = fRec17[0];
		fRec18[2] = fRec18[1]; fRec18[1] = fRec18[0];
		fRec19[2] = fRec19[1]; fRec19[1] = fRec19[0];
		fRec20[1] = fRec20[0];
		fRec4[1] = fRec4[0];
		fRec5[2] = fRec5[1]; fRec5[1] = fRec5[0];
		fRec6[1] = fRec6[0];
		fVec4[1] = fVec4[0];
		fRec7[2] = fRec7[1]; fRec7[1] = fRec7[0];
		fRec8[1] = fRec8[0];
		fVec3[1] = fVec3[0];
		fRec9[2] = fRec9[1]; fRec9[1] = fRec9[0];
		fRec10[1] = fRec10[0];
		fVec2[1] = fVec2[0];
		fRec11[2] = fRec11[1]; fRec11[1] = fRec11[0];
		fRec12[1] = fRec12[0];
		fVec1[1] = fVec1[0];
		fRec13[2] = fRec13[1]; fRec13[1] = fRec13[0];
		fRec14[1] = fRec14[0];
		fVec0[1] = fVec0[0];
		for (int i=5; i>0; i--) fRec16[i] = fRec16[i-1];
		fRec15[1] = fRec15[0];
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
