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
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec5[2];
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
	double 	fVec0[2];
	double 	fConst62;
	double 	fConst63;
	double 	fRec11[2];
	double 	fRec10[3];
	double 	fConst64;
	double 	fRec9[3];
	double 	fRec8[3];
	double 	fRec7[3];
	double 	fRec6[6];
	double 	fConst65;
	double 	fRec4[2];
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fRec3[2];
	double 	fConst69;
	double 	fRec1[2];
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fRec21[2];
	double 	fRec20[3];
	double 	fVec1[2];
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fRec19[2];
	double 	fRec18[3];
	double 	fConst77;
	double 	fRec17[3];
	double 	fRec16[3];
	double 	fRec15[6];
	double 	fRec14[2];
	double 	fRec13[2];
	double 	fRec12[2];
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fRec30[2];
	double 	fRec29[3];
	double 	fVec2[2];
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fRec28[2];
	double 	fRec27[3];
	double 	fConst85;
	double 	fRec26[3];
	double 	fRec25[6];
	double 	fRec24[2];
	double 	fRec23[2];
	double 	fRec22[2];
	double 	fConst86;
	double 	fConst87;
	double 	fRec38[2];
	double 	fRec37[3];
	double 	fVec3[2];
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fRec36[2];
	double 	fRec35[3];
	double 	fConst92;
	double 	fRec34[6];
	double 	fRec33[2];
	double 	fRec32[2];
	double 	fRec31[2];
	double 	fRec44[2];
	double 	fRec43[3];
	double 	fRec42[6];
	double 	fRec41[2];
	double 	fRec40[2];
	double 	fRec39[2];

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
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec11[i] = 0;
	for (int i=0; i<3; i++) fRec10[i] = 0;
	for (int i=0; i<3; i++) fRec9[i] = 0;
	for (int i=0; i<3; i++) fRec8[i] = 0;
	for (int i=0; i<3; i++) fRec7[i] = 0;
	for (int i=0; i<6; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec21[i] = 0;
	for (int i=0; i<3; i++) fRec20[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec19[i] = 0;
	for (int i=0; i<3; i++) fRec18[i] = 0;
	for (int i=0; i<3; i++) fRec17[i] = 0;
	for (int i=0; i<3; i++) fRec16[i] = 0;
	for (int i=0; i<6; i++) fRec15[i] = 0;
	for (int i=0; i<2; i++) fRec14[i] = 0;
	for (int i=0; i<2; i++) fRec13[i] = 0;
	for (int i=0; i<2; i++) fRec12[i] = 0;
	for (int i=0; i<2; i++) fRec30[i] = 0;
	for (int i=0; i<3; i++) fRec29[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec28[i] = 0;
	for (int i=0; i<3; i++) fRec27[i] = 0;
	for (int i=0; i<3; i++) fRec26[i] = 0;
	for (int i=0; i<6; i++) fRec25[i] = 0;
	for (int i=0; i<2; i++) fRec24[i] = 0;
	for (int i=0; i<2; i++) fRec23[i] = 0;
	for (int i=0; i<2; i++) fRec22[i] = 0;
	for (int i=0; i<2; i++) fRec38[i] = 0;
	for (int i=0; i<3; i++) fRec37[i] = 0;
	for (int i=0; i<2; i++) fVec3[i] = 0;
	for (int i=0; i<2; i++) fRec36[i] = 0;
	for (int i=0; i<3; i++) fRec35[i] = 0;
	for (int i=0; i<6; i++) fRec34[i] = 0;
	for (int i=0; i<2; i++) fRec33[i] = 0;
	for (int i=0; i<2; i++) fRec32[i] = 0;
	for (int i=0; i<2; i++) fRec31[i] = 0;
	for (int i=0; i<2; i++) fRec44[i] = 0;
	for (int i=0; i<3; i++) fRec43[i] = 0;
	for (int i=0; i<6; i++) fRec42[i] = 0;
	for (int i=0; i<2; i++) fRec41[i] = 0;
	for (int i=0; i<2; i++) fRec40[i] = 0;
	for (int i=0; i<2; i++) fRec39[i] = 0;
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
	fConst17 = (1.45284077923968e-26 * fConst1);
	fConst18 = (8.74279694529759e-17 + (fConst1 * (7.18708786341519e-16 + (fConst1 * (6.97522236873734e-17 + (fConst1 * (2.69471797250462e-19 + fConst17)))))));
	fConst19 = (2.90568155847935e-28 * fConst1);
	fConst20 = (5.48146563373846e-12 + (fConst1 * (5.34477320715169e-13 + (fConst1 * (2.24699083136596e-15 + (fConst1 * (5.51050600994588e-21 + fConst19)))))));
	fConst21 = ((fConst1 * (7.18708786341519e-16 + (fConst1 * ((fConst1 * (2.69471797250462e-19 - fConst17)) - 6.97522236873734e-17)))) - 8.74279694529759e-17);
	fConst22 = ((fConst1 * (5.34477320715169e-13 + (fConst1 * ((fConst1 * (5.51050600994588e-21 - fConst19)) - 2.24699083136596e-15)))) - 5.48146563373846e-12);
	fConst23 = (7.26420389619839e-26 * fConst1);
	fConst24 = ((fConst1 * (7.18708786341519e-16 + (fConst1 * (6.97522236873734e-17 + (fConst1 * (fConst23 - 8.08415391751386e-19)))))) - 2.62283908358928e-16);
	fConst25 = (1.45284077923968e-27 * fConst1);
	fConst26 = ((fConst1 * (5.34477320715169e-13 + (fConst1 * (2.24699083136596e-15 + (fConst1 * (fConst25 - 1.65315180298376e-20)))))) - 1.64443969012154e-11);
	fConst27 = (1.45284077923968e-25 * fConst1);
	fConst28 = ((fConst1 * ((fConst1 * (1.39504447374747e-16 + (fConst1 * (5.38943594500924e-19 - fConst27)))) - 1.43741757268304e-15)) - 1.74855938905952e-16);
	fConst29 = (2.90568155847935e-27 * fConst1);
	fConst30 = ((fConst1 * ((fConst1 * (4.49398166273193e-15 + (fConst1 * (1.10210120198918e-20 - fConst29)))) - 1.06895464143034e-12)) - 1.09629312674769e-11);
	fConst31 = (1.74855938905952e-16 + (fConst1 * ((fConst1 * ((fConst1 * (5.38943594500924e-19 + fConst27)) - 1.39504447374747e-16)) - 1.43741757268304e-15)));
	fConst32 = (1.09629312674769e-11 + (fConst1 * ((fConst1 * ((fConst1 * (1.10210120198918e-20 + fConst29)) - 4.49398166273193e-15)) - 1.06895464143034e-12)));
	fConst33 = (2.62283908358928e-16 + (fConst1 * (7.18708786341519e-16 + (fConst1 * ((fConst1 * (0 - (8.08415391751386e-19 + fConst23))) - 6.97522236873734e-17)))));
	fConst34 = (1.64443969012154e-11 + (fConst1 * (5.34477320715169e-13 + (fConst1 * ((fConst1 * (0 - (1.65315180298376e-20 + fConst25))) - 2.24699083136596e-15)))));
	fConst35 = tan((270.1769682087222 / fConst0));
	fConst36 = (1.0 / faustpower<2>(fConst35));
	fConst37 = (2 * (1 - fConst36));
	fConst38 = (1.0 / fConst35);
	fConst39 = (1 + ((fConst38 - 1.0) / fConst35));
	fConst40 = (1.0 / (1 + ((1.0 + fConst38) / fConst35)));
	fConst41 = tan((659.7344572538566 / fConst0));
	fConst42 = (1.0 / faustpower<2>(fConst41));
	fConst43 = (2 * (1 - fConst42));
	fConst44 = (1.0 / fConst41);
	fConst45 = (1 + ((fConst44 - 1.0) / fConst41));
	fConst46 = (1.0 / (1 + ((1.0 + fConst44) / fConst41)));
	fConst47 = tan((3769.9111843077517 / fConst0));
	fConst48 = (1.0 / faustpower<2>(fConst47));
	fConst49 = (2 * (1 - fConst48));
	fConst50 = (1.0 / fConst47);
	fConst51 = (1 + ((fConst50 - 1.0) / fConst47));
	fConst52 = (1.0 / (1 + ((1.0 + fConst50) / fConst47)));
	fConst53 = tan((20517.741620594938 / fConst0));
	fConst54 = (1.0 / faustpower<2>(fConst53));
	fConst55 = (2 * (1 - fConst54));
	fConst56 = (1.0 / fConst53);
	fConst57 = (1 + ((fConst56 - 1.0000000000000004) / fConst53));
	fConst58 = (1 + ((1.0000000000000004 + fConst56) / fConst53));
	fConst59 = (1.0 / fConst58);
	fConst60 = (1 + fConst56);
	fConst61 = (0 - ((1 - fConst56) / fConst60));
	fConst62 = (0 - fConst56);
	fConst63 = (1.0 / fConst60);
	fConst64 = (2 * (0 - fConst54));
	fConst65 = faustpower<3>(fConst1);
	fConst66 = (2.64722259803455e-05 * fConst1);
	fConst67 = (0 - fConst66);
	fConst68 = (1.0 / fConst15);
	fConst69 = (1.0 / fConst12);
	fConst70 = (1 + ((fConst50 - 1.0000000000000004) / fConst47));
	fConst71 = (1 + ((fConst50 + 1.0000000000000004) / fConst47));
	fConst72 = (1.0 / fConst71);
	fConst73 = (0 - fConst50);
	fConst74 = (1 + fConst50);
	fConst75 = (1.0 / (fConst74 * fConst58));
	fConst76 = (0 - ((1 - fConst50) / fConst74));
	fConst77 = (2 * (0 - fConst48));
	fConst78 = (1 + ((fConst44 - 1.0000000000000004) / fConst41));
	fConst79 = (1 + ((fConst44 + 1.0000000000000004) / fConst41));
	fConst80 = (1.0 / fConst79);
	fConst81 = (0 - fConst44);
	fConst82 = (1 + fConst44);
	fConst83 = (1.0 / (fConst82 * fConst71));
	fConst84 = (0 - ((1 - fConst44) / fConst82));
	fConst85 = (2 * (0 - fConst42));
	fConst86 = (1 + ((fConst38 - 1.0000000000000004) / fConst35));
	fConst87 = (1.0 / (1 + ((fConst38 + 1.0000000000000004) / fConst35)));
	fConst88 = (0 - fConst38);
	fConst89 = (1 + fConst38);
	fConst90 = (1.0 / (fConst89 * fConst79));
	fConst91 = (0 - ((1 - fConst38) / fConst89));
	fConst92 = (2 * (0 - fConst36));
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
		double fTemp1 = (fConst10 + (fRec0[0] * ((fConst9 * fRec0[0]) - fConst8)));
		fRec2[0] = (fSlow1 + (0.993 * fRec2[1]));
		double fTemp2 = (0.0216825672159584 + (fConst1 * (0 - (2.03816131830009e-05 * fRec2[0]))));
		fRec5[0] = (fSlow2 + (0.993 * fRec5[1]));
		double fTemp3 = (6.15690879602922e-13 + (fConst1 * (fConst20 + (fConst18 * fRec5[0]))));
		double fTemp4 = (2.24087296298981e-14 + (1.12043648149491e-12 * fRec5[0]));
		double fTemp5 = (0 - fTemp4);
		double fTemp6 = (6.15690879602922e-13 + (fConst1 * (fConst22 + (fConst21 * fRec5[0]))));
		double fTemp7 = (3.07845439801461e-12 + (fConst1 * (fConst26 + (fConst24 * fRec5[0]))));
		double fTemp8 = (6.15690879602922e-12 + (fConst1 * (fConst30 + (fConst28 * fRec5[0]))));
		double fTemp9 = (6.15690879602922e-12 + (fConst1 * (fConst32 + (fConst31 * fRec5[0]))));
		double fTemp10 = (3.07845439801461e-12 + (fConst1 * (fConst34 + (fConst33 * fRec5[0]))));
		double fTemp11 = (fConst37 * fRec7[1]);
		double fTemp12 = (fConst43 * fRec8[1]);
		double fTemp13 = (fConst49 * fRec9[1]);
		double fTemp14 = (double)input0[i];
		fVec0[0] = fTemp14;
		fRec11[0] = ((fConst63 * ((fConst56 * fVec0[0]) + (fConst62 * fVec0[1]))) + (fConst61 * fRec11[1]));
		fRec10[0] = (fRec11[0] - (fConst59 * ((fConst57 * fRec10[2]) + (fConst55 * fRec10[1]))));
		fRec9[0] = ((fConst59 * ((fConst64 * fRec10[1]) + (fConst54 * (fRec10[2] + fRec10[0])))) - (fConst52 * ((fConst51 * fRec9[2]) + fTemp13)));
		fRec8[0] = ((fRec9[2] + (fConst52 * (fTemp13 + (fConst51 * fRec9[0])))) - (fConst46 * ((fConst45 * fRec8[2]) + fTemp12)));
		fRec7[0] = ((fRec8[2] + (fConst46 * (fTemp12 + (fConst45 * fRec8[0])))) - (fConst40 * ((fConst39 * fRec7[2]) + fTemp11)));
		fRec6[0] = ((fRec7[2] + (fConst40 * (fTemp11 + (fConst39 * fRec7[0])))) - ((((((fRec6[1] * fTemp10) + (fRec6[2] * fTemp9)) + (fRec6[3] * fTemp8)) + (fRec6[4] * fTemp7)) + (fRec6[5] * fTemp6)) / fTemp3));
		double fTemp15 = (1.12043648149491e-14 + (5.60218240747454e-13 * fRec5[0]));
		double fTemp16 = (0 - fTemp15);
		fRec4[0] = ((fConst65 * (((fTemp15 * (fRec6[1] + fRec6[5])) + ((fTemp16 * (fRec6[4] + fRec6[0])) + ((fRec6[2] * fTemp4) + (fRec6[3] * fTemp5)))) / fTemp3)) - (fConst16 * fRec4[1]));
		double fTemp17 = (fConst68 * ((fConst67 * fRec4[1]) + (fConst66 * fRec4[0])));
		fRec3[0] = (((int(signbit(fTemp17)))?bajatubedriver_negclip(fTemp17):bajatubedriverclip(fTemp17)) - (fConst13 * fRec3[1]));
		double fTemp18 = (0.0216825672159584 + (fConst11 * fRec2[0]));
		fRec1[0] = ((fConst69 * ((fRec3[0] * fTemp18) + (fRec3[1] * fTemp2))) - ((fRec1[1] * fTemp1) / fTemp0));
		double fTemp19 = (fConst37 * fRec16[1]);
		double fTemp20 = (fConst43 * fRec17[1]);
		fRec21[0] = ((fConst63 * (fVec0[0] + fVec0[1])) + (fConst61 * fRec21[1]));
		fRec20[0] = (fRec21[0] - (fConst59 * ((fConst57 * fRec20[2]) + (fConst55 * fRec20[1]))));
		double fTemp21 = (fRec20[0] + (fRec20[2] + (2 * fRec20[1])));
		fVec1[0] = fTemp21;
		fRec19[0] = ((fConst76 * fRec19[1]) + (fConst75 * ((fConst50 * fVec1[0]) + (fConst73 * fVec1[1]))));
		fRec18[0] = (fRec19[0] - (fConst72 * ((fConst49 * fRec18[1]) + (fConst70 * fRec18[2]))));
		fRec17[0] = ((fConst72 * ((fConst77 * fRec18[1]) + (fConst48 * (fRec18[2] + fRec18[0])))) - (fConst46 * ((fConst45 * fRec17[2]) + fTemp20)));
		fRec16[0] = ((fRec17[2] + (fConst46 * (fTemp20 + (fConst45 * fRec17[0])))) - (fConst40 * ((fConst39 * fRec16[2]) + fTemp19)));
		fRec15[0] = ((fRec16[2] + (fConst40 * (fTemp19 + (fConst39 * fRec16[0])))) - ((((((fTemp10 * fRec15[1]) + (fTemp9 * fRec15[2])) + (fTemp8 * fRec15[3])) + (fTemp7 * fRec15[4])) + (fTemp6 * fRec15[5])) / fTemp3));
		fRec14[0] = ((fConst65 * (((fTemp15 * (fRec15[1] + fRec15[5])) + ((fTemp16 * (fRec15[4] + fRec15[0])) + ((fTemp4 * fRec15[2]) + (fRec15[3] * fTemp5)))) / fTemp3)) - (fConst16 * fRec14[1]));
		double fTemp22 = (fConst68 * ((fConst67 * fRec14[1]) + (fConst66 * fRec14[0])));
		fRec13[0] = (((int(signbit(fTemp22)))?bajatubedriver_negclip(fTemp22):bajatubedriverclip(fTemp22)) - (fConst13 * fRec13[1]));
		fRec12[0] = ((fConst69 * ((fTemp18 * fRec13[0]) + (fTemp2 * fRec13[1]))) - ((fRec12[1] * fTemp1) / fTemp0));
		double fTemp23 = (fConst37 * fRec26[1]);
		fRec30[0] = ((fConst76 * fRec30[1]) + (fConst75 * (fVec1[0] + fVec1[1])));
		fRec29[0] = (fRec30[0] - (fConst72 * ((fConst49 * fRec29[1]) + (fConst70 * fRec29[2]))));
		double fTemp24 = (fRec29[0] + (fRec29[2] + (2 * fRec29[1])));
		fVec2[0] = fTemp24;
		fRec28[0] = ((fConst84 * fRec28[1]) + (fConst83 * ((fConst44 * fVec2[0]) + (fConst81 * fVec2[1]))));
		fRec27[0] = (fRec28[0] - (fConst80 * ((fConst43 * fRec27[1]) + (fConst78 * fRec27[2]))));
		fRec26[0] = ((fConst80 * ((fConst85 * fRec27[1]) + (fConst42 * (fRec27[2] + fRec27[0])))) - (fConst40 * ((fConst39 * fRec26[2]) + fTemp23)));
		fRec25[0] = ((fRec26[2] + (fConst40 * (fTemp23 + (fConst39 * fRec26[0])))) - ((((((fTemp10 * fRec25[1]) + (fTemp9 * fRec25[2])) + (fTemp8 * fRec25[3])) + (fTemp7 * fRec25[4])) + (fTemp6 * fRec25[5])) / fTemp3));
		fRec24[0] = ((fConst65 * (((fTemp15 * (fRec25[1] + fRec25[5])) + ((fTemp16 * (fRec25[4] + fRec25[0])) + ((fTemp4 * fRec25[2]) + (fRec25[3] * fTemp5)))) / fTemp3)) - (fConst16 * fRec24[1]));
		double fTemp25 = (fConst68 * ((fConst67 * fRec24[1]) + (fConst66 * fRec24[0])));
		fRec23[0] = (((int(signbit(fTemp25)))?bajatubedriver_negclip(fTemp25):bajatubedriverclip(fTemp25)) - (fConst13 * fRec23[1]));
		fRec22[0] = ((fConst69 * ((fTemp18 * fRec23[0]) + (fTemp2 * fRec23[1]))) - ((fRec22[1] * fTemp1) / fTemp0));
		fRec38[0] = ((fConst84 * fRec38[1]) + (fConst83 * (fVec2[0] + fVec2[1])));
		fRec37[0] = (fRec38[0] - (fConst80 * ((fConst43 * fRec37[1]) + (fConst78 * fRec37[2]))));
		double fTemp26 = (fRec37[0] + (fRec37[2] + (2 * fRec37[1])));
		fVec3[0] = fTemp26;
		fRec36[0] = ((fConst91 * fRec36[1]) + (fConst90 * ((fConst38 * fVec3[0]) + (fConst88 * fVec3[1]))));
		fRec35[0] = (fRec36[0] - (fConst87 * ((fConst37 * fRec35[1]) + (fConst86 * fRec35[2]))));
		fRec34[0] = ((fConst87 * ((fConst92 * fRec35[1]) + (fConst36 * (fRec35[2] + fRec35[0])))) - ((((((fTemp10 * fRec34[1]) + (fTemp9 * fRec34[2])) + (fTemp8 * fRec34[3])) + (fTemp7 * fRec34[4])) + (fTemp6 * fRec34[5])) / fTemp3));
		fRec33[0] = ((fConst65 * (((fTemp15 * (fRec34[1] + fRec34[5])) + ((fTemp16 * (fRec34[4] + fRec34[0])) + ((fTemp4 * fRec34[2]) + (fRec34[3] * fTemp5)))) / fTemp3)) - (fConst16 * fRec33[1]));
		double fTemp27 = (fConst68 * ((fConst67 * fRec33[1]) + (fConst66 * fRec33[0])));
		fRec32[0] = (((int(signbit(fTemp27)))?bajatubedriver_negclip(fTemp27):bajatubedriverclip(fTemp27)) - (fConst13 * fRec32[1]));
		fRec31[0] = ((fConst69 * ((fTemp18 * fRec32[0]) + (fTemp2 * fRec32[1]))) - ((fRec31[1] * fTemp1) / fTemp0));
		fRec44[0] = ((fConst91 * fRec44[1]) + (fConst90 * (fVec3[0] + fVec3[1])));
		fRec43[0] = (fRec44[0] - (fConst87 * ((fConst37 * fRec43[1]) + (fConst86 * fRec43[2]))));
		fRec42[0] = ((fConst87 * (fRec43[0] + (fRec43[2] + (2 * fRec43[1])))) - ((((((fTemp10 * fRec42[1]) + (fTemp9 * fRec42[2])) + (fTemp8 * fRec42[3])) + (fTemp7 * fRec42[4])) + (fTemp6 * fRec42[5])) / fTemp3));
		fRec41[0] = ((fConst65 * (((fTemp15 * (fRec42[1] + fRec42[5])) + ((fTemp16 * (fRec42[4] + fRec42[0])) + ((fTemp4 * fRec42[2]) + (fRec42[3] * fTemp5)))) / fTemp3)) - (fConst16 * fRec41[1]));
		double fTemp28 = (fConst68 * ((fConst67 * fRec41[1]) + (fConst66 * fRec41[0])));
		fRec40[0] = (((int(signbit(fTemp28)))?bajatubedriver_negclip(fTemp28):bajatubedriverclip(fTemp28)) - (fConst13 * fRec40[1]));
		fRec39[0] = ((fConst69 * ((fTemp18 * fRec40[0]) + (fTemp2 * fRec40[1]))) - ((fRec39[1] * fTemp1) / fTemp0));
		output0[i] = (FAUSTFLOAT)((((fRec0[0] * ((0.488938774271564 * fRec0[0]) - 1.61349795509616)) - 0.166239183252332) * (fRec39[0] + (fRec39[1] + (fRec31[0] + (fRec31[1] + (fRec22[0] + (fRec22[1] + (fRec12[0] + (fRec12[1] + (fRec1[1] + fRec1[0])))))))))) / fTemp0);
		// post processing
		fRec39[1] = fRec39[0];
		fRec40[1] = fRec40[0];
		fRec41[1] = fRec41[0];
		for (int i=5; i>0; i--) fRec42[i] = fRec42[i-1];
		fRec43[2] = fRec43[1]; fRec43[1] = fRec43[0];
		fRec44[1] = fRec44[0];
		fRec31[1] = fRec31[0];
		fRec32[1] = fRec32[0];
		fRec33[1] = fRec33[0];
		for (int i=5; i>0; i--) fRec34[i] = fRec34[i-1];
		fRec35[2] = fRec35[1]; fRec35[1] = fRec35[0];
		fRec36[1] = fRec36[0];
		fVec3[1] = fVec3[0];
		fRec37[2] = fRec37[1]; fRec37[1] = fRec37[0];
		fRec38[1] = fRec38[0];
		fRec22[1] = fRec22[0];
		fRec23[1] = fRec23[0];
		fRec24[1] = fRec24[0];
		for (int i=5; i>0; i--) fRec25[i] = fRec25[i-1];
		fRec26[2] = fRec26[1]; fRec26[1] = fRec26[0];
		fRec27[2] = fRec27[1]; fRec27[1] = fRec27[0];
		fRec28[1] = fRec28[0];
		fVec2[1] = fVec2[0];
		fRec29[2] = fRec29[1]; fRec29[1] = fRec29[0];
		fRec30[1] = fRec30[0];
		fRec12[1] = fRec12[0];
		fRec13[1] = fRec13[0];
		fRec14[1] = fRec14[0];
		for (int i=5; i>0; i--) fRec15[i] = fRec15[i-1];
		fRec16[2] = fRec16[1]; fRec16[1] = fRec16[0];
		fRec17[2] = fRec17[1]; fRec17[1] = fRec17[0];
		fRec18[2] = fRec18[1]; fRec18[1] = fRec18[0];
		fRec19[1] = fRec19[0];
		fVec1[1] = fVec1[0];
		fRec20[2] = fRec20[1]; fRec20[1] = fRec20[0];
		fRec21[1] = fRec21[0];
		fRec1[1] = fRec1[0];
		fRec3[1] = fRec3[0];
		fRec4[1] = fRec4[0];
		for (int i=5; i>0; i--) fRec6[i] = fRec6[i-1];
		fRec7[2] = fRec7[1]; fRec7[1] = fRec7[0];
		fRec8[2] = fRec8[1]; fRec8[1] = fRec8[0];
		fRec9[2] = fRec9[1]; fRec9[1] = fRec9[0];
		fRec10[2] = fRec10[1]; fRec10[1] = fRec10[0];
		fRec11[1] = fRec11[0];
		fVec0[1] = fVec0[0];
		fRec5[1] = fRec5[0];
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
