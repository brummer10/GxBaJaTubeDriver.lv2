// generated from file '../dkbuild/bajatubedriver//bajatubedriver.dsp' by dsp2cc:
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
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec2[2];
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec5[2];
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
	double 	fRec6[6];
	double 	fConst34;
	double 	fRec4[2];
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fRec3[2];
	double 	fConst38;
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
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<6; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
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
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (2.24914085283282e-06 * fConst0);
	fConst2 = (0 - (0.112461932029384 + fConst1));
	fConst3 = (2.6891901501262e-06 * fConst0);
	fConst4 = (fConst3 - 0.99009478393055);
	fConst5 = (2.91410423540948e-07 * fConst0);
	fConst6 = (1.47162430127362 + fConst5);
	fConst7 = (0.99009478393055 + fConst3);
	fConst8 = (fConst1 - 0.112461932029384);
	fConst9 = (1.47162430127362 - fConst5);
	fConst10 = (2.03816131830009e-05 * fConst0);
	fConst11 = (0.0216825672159584 + fConst10);
	fConst12 = ((0.0216825672159584 - fConst10) / fConst11);
	fConst13 = (2.0682972551596e-05 * fConst0);
	fConst14 = (0.00721731752339018 + fConst13);
	fConst15 = ((0.00721731752339018 - fConst13) / fConst14);
	fConst16 = (1.45284077923968e-26 * fConst0);
	fConst17 = (8.74279694529759e-17 + (fConst0 * (7.18708786341519e-16 + (fConst0 * (6.97522236873734e-17 + (fConst0 * (2.69471797250462e-19 + fConst16)))))));
	fConst18 = (2.90568155847935e-28 * fConst0);
	fConst19 = (5.48146563373846e-12 + (fConst0 * (5.34477320715169e-13 + (fConst0 * (2.24699083136596e-15 + (fConst0 * (5.51050600994588e-21 + fConst18)))))));
	fConst20 = ((fConst0 * (7.18708786341519e-16 + (fConst0 * ((fConst0 * (2.69471797250462e-19 - fConst16)) - 6.97522236873734e-17)))) - 8.74279694529759e-17);
	fConst21 = ((fConst0 * (5.34477320715169e-13 + (fConst0 * ((fConst0 * (5.51050600994588e-21 - fConst18)) - 2.24699083136596e-15)))) - 5.48146563373846e-12);
	fConst22 = (7.26420389619839e-26 * fConst0);
	fConst23 = ((fConst0 * (7.18708786341519e-16 + (fConst0 * (6.97522236873734e-17 + (fConst0 * (fConst22 - 8.08415391751386e-19)))))) - 2.62283908358928e-16);
	fConst24 = (1.45284077923968e-27 * fConst0);
	fConst25 = ((fConst0 * (5.34477320715169e-13 + (fConst0 * (2.24699083136596e-15 + (fConst0 * (fConst24 - 1.65315180298376e-20)))))) - 1.64443969012154e-11);
	fConst26 = (1.45284077923968e-25 * fConst0);
	fConst27 = ((fConst0 * ((fConst0 * (1.39504447374747e-16 + (fConst0 * (5.38943594500924e-19 - fConst26)))) - 1.43741757268304e-15)) - 1.74855938905952e-16);
	fConst28 = (2.90568155847935e-27 * fConst0);
	fConst29 = ((fConst0 * ((fConst0 * (4.49398166273193e-15 + (fConst0 * (1.10210120198918e-20 - fConst28)))) - 1.06895464143034e-12)) - 1.09629312674769e-11);
	fConst30 = (1.74855938905952e-16 + (fConst0 * ((fConst0 * ((fConst0 * (5.38943594500924e-19 + fConst26)) - 1.39504447374747e-16)) - 1.43741757268304e-15)));
	fConst31 = (1.09629312674769e-11 + (fConst0 * ((fConst0 * ((fConst0 * (1.10210120198918e-20 + fConst28)) - 4.49398166273193e-15)) - 1.06895464143034e-12)));
	fConst32 = (2.62283908358928e-16 + (fConst0 * (7.18708786341519e-16 + (fConst0 * ((fConst0 * (0 - (8.08415391751386e-19 + fConst22))) - 6.97522236873734e-17)))));
	fConst33 = (1.64443969012154e-11 + (fConst0 * (5.34477320715169e-13 + (fConst0 * ((fConst0 * (0 - (1.65315180298376e-20 + fConst24))) - 2.24699083136596e-15)))));
	fConst34 = faustpower<3>(fConst0);
	fConst35 = (2.64722259803455e-05 * fConst0);
	fConst36 = (0 - fConst35);
	fConst37 = (1.0 / fConst14);
	fConst38 = (1.0 / fConst11);
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
		double fTemp0 = (fConst6 + (fRec0[0] * (fConst4 + (fConst2 * fRec0[0]))));
		fRec2[0] = (fSlow1 + (0.993 * fRec2[1]));
		fRec5[0] = (fSlow2 + (0.993 * fRec5[1]));
		double fTemp1 = (6.15690879602922e-13 + (fConst0 * (fConst19 + (fConst17 * fRec5[0]))));
		double fTemp2 = (2.24087296298981e-14 + (1.12043648149491e-12 * fRec5[0]));
		fRec6[0] = ((double)input0[i] - ((((((fRec6[1] * (3.07845439801461e-12 + (fConst0 * (fConst33 + (fConst32 * fRec5[0]))))) + (fRec6[2] * (6.15690879602922e-12 + (fConst0 * (fConst31 + (fConst30 * fRec5[0])))))) + (fRec6[3] * (6.15690879602922e-12 + (fConst0 * (fConst29 + (fConst27 * fRec5[0])))))) + (fRec6[4] * (3.07845439801461e-12 + (fConst0 * (fConst25 + (fConst23 * fRec5[0])))))) + (fRec6[5] * (6.15690879602922e-13 + (fConst0 * (fConst21 + (fConst20 * fRec5[0])))))) / fTemp1));
		double fTemp3 = (1.12043648149491e-14 + (5.60218240747454e-13 * fRec5[0]));
		fRec4[0] = ((fConst34 * (((fTemp3 * (fRec6[1] + fRec6[5])) + (((0 - fTemp3) * (fRec6[4] + fRec6[0])) + ((fRec6[2] * fTemp2) + (fRec6[3] * (0 - fTemp2))))) / fTemp1)) - (fConst15 * fRec4[1]));
		double fTemp4 = (fConst37 * ((fConst36 * fRec4[1]) + (fConst35 * fRec4[0])));
		fRec3[0] = (((int(signbit(fTemp4)))?bajatubedriver_negclip(fTemp4):bajatubedriverclip(fTemp4)) - (fConst12 * fRec3[1]));
		fRec1[0] = ((fConst38 * ((fRec3[0] * (0.0216825672159584 + (fConst10 * fRec2[0]))) + (fRec3[1] * (0.0216825672159584 + (fConst0 * (0 - (2.03816131830009e-05 * fRec2[0]))))))) - ((fRec1[1] * (fConst9 + (fRec0[0] * ((fConst8 * fRec0[0]) - fConst7)))) / fTemp0));
		output0[i] = (FAUSTFLOAT)((((fRec0[0] * ((0.488938774271564 * fRec0[0]) - 1.61349795509616)) - 0.166239183252332) * (fRec1[1] + fRec1[0])) / fTemp0);
		// post processing
		fRec1[1] = fRec1[0];
		fRec3[1] = fRec3[0];
		fRec4[1] = fRec4[0];
		for (int i=5; i>0; i--) fRec6[i] = fRec6[i-1];
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
