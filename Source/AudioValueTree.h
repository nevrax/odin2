

{
  // Osc 1
  std::make_unique<AudioParameterInt>("osc1_oct", "Osc1 Octave", -3, 3, 0),
      std::make_unique<AudioParameterInt>("osc1_semi", "Osc1 Semitones", -7, 7,
                                          0),
      std::make_unique<AudioParameterFloat>(
          "osc1_fine", "Osc1 Finetune", NormalisableRange<float>(-50.0f, 50.0f),
          0),
      std::make_unique<AudioParameterFloat>(
          "osc1_vol", "Osc1 Volume", NormalisableRange<float>(-20.0f, 12.0f),
          0),
      std::make_unique<AudioParameterInt>("osc1_reset", "Osc1 Reset", 0, 1, 0),
      std::make_unique<AudioParameterFloat>("osc1_position", "Osc1 Wavetble Position",
                                            NormalisableRange<float>(0.f, 1.f),
                                            0),
      std::make_unique<AudioParameterFloat>(
          "osc1_detune", "Osc1 Detune", NormalisableRange<float>(0.f, 1.f), 0),
      std::make_unique<AudioParameterFloat>(
          "osc1_pos_mod", "Osc1 Position Modulation", NormalisableRange<float>(-1.f, 1.f), 0),
      std::make_unique<AudioParameterFloat>(
          "osc1_multi_position", "Osc1 Multi Position",
          NormalisableRange<float>(0.f, 1.f), 0),
      std::make_unique<AudioParameterFloat>(
          "osc1_spread", "Osc1 Wavetable Spread", NormalisableRange<float>(0.f, 1.f), 0),
      std::make_unique<AudioParameterFloat>(
          "osc1_pulsewidth", "Osc1 PulseWidth",
          NormalisableRange<float>(0.f, 1.f), 0.5f),
      std::make_unique<AudioParameterFloat>(
          "osc1_drift", "Osc1 Drift", NormalisableRange<float>(0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>("osc1_vec_x", "Osc1 Vector X",
                                            NormalisableRange<float>(0.f, 1.f),
                                            0.f),
      std::make_unique<AudioParameterFloat>("osc1_vec_y", "Osc1 Vector Y",
                                            NormalisableRange<float>(0.f, 1.f),
                                            0.f),
      std::make_unique<AudioParameterFloat>(
          "osc1_arp_speed", "Osc1 Arpeggiator Speed",
          NormalisableRange<float>(1.000000, 100.000000, 0, 0.354358), 20.f),
      std::make_unique<AudioParameterInt>("osc1_step_1", "Osc1 Step1", -12, 12,
                                          0),
      std::make_unique<AudioParameterInt>("osc1_step_2", "Osc1 Step2", -12, 12,
                                          12),
      std::make_unique<AudioParameterInt>("osc1_step_3", "Osc1 Step3", -12, 12,
                                          7),
      std::make_unique<AudioParameterInt>("osc1_arp_on", "Osc1 Arpeggiator On",
                                          0, 1, 0),
      std::make_unique<AudioParameterInt>("osc1_step_3_on", "Osc1 Step3 On", 0,
                                          1, 0),
      std::make_unique<AudioParameterInt>("osc1_chipnoise", "Osc1 Chipnoise", 0,
                                          1, 0),
      std::make_unique<AudioParameterInt>("osc1_carrier_ratio",
                                          "Osc1 Carrier Ratio", 1, 12, 1),
      std::make_unique<AudioParameterInt>("osc1_modulator_ratio",
                                          "Osc1 Modulator Ratio", 1, 12, 1),
      std::make_unique<AudioParameterInt>("osc1_exp_fm", "Osc1 Exponential FM",
                                          0, 1, 0),
      std::make_unique<AudioParameterFloat>("osc1_fm", "Osc1 FM/PM amount",
                                            NormalisableRange<float>(0.f, 1.f),
                                            0.f),
      std::make_unique<AudioParameterFloat>(
          "osc1_lp", "Osc1 Noise Lowpass",
          NormalisableRange<float>(80.f, 18000.f, 0.f, FILTER_SKEW_DEFAULT), 18000.f),
      std::make_unique<AudioParameterFloat>(
          "osc1_hp", "Osc1 Noise Highpass",
          NormalisableRange<float>(80.f, 18000.f, 0.f, FILTER_SKEW_DEFAULT), 80.f),
      // Osc 2
      std::make_unique<AudioParameterInt>("osc2_oct", "Osc2 Octave", -3, 3, 0),
      std::make_unique<AudioParameterInt>("osc2_semi", "Osc2 Semitones", -7, 7,
                                          0),
      std::make_unique<AudioParameterFloat>(
          "osc2_fine", "Osc2 Finetune", NormalisableRange<float>(-50.0f, 50.0f),
          0),
      std::make_unique<AudioParameterFloat>(
          "osc2_vol", "Osc2 Volume", NormalisableRange<float>(-20.0f, 12.0f),
          0),
      std::make_unique<AudioParameterInt>("osc2_reset", "Osc2 Reset", 0, 1, 0),
      std::make_unique<AudioParameterInt>("osc2_sync", "Osc2 Sync", 0, 1, 0),
      std::make_unique<AudioParameterFloat>("osc2_position", "Osc2 Wavetable Position",
                                            NormalisableRange<float>(0.f, 1.f),
                                            0),
      std::make_unique<AudioParameterFloat>(
          "osc2_detune", "Osc2 Detune", NormalisableRange<float>(0.f, 1.f), 0),
          std::make_unique<AudioParameterFloat>(
          "osc2_pos_mod", "Osc2 Position Modulation", NormalisableRange<float>(-1.f, 1.f), 0),
      std::make_unique<AudioParameterFloat>(
          "osc2_multi_position", "Osc2 Multi Position",
          NormalisableRange<float>(0.f, 1.f), 0),
      std::make_unique<AudioParameterFloat>(
          "osc2_spread", "Osc2 Wavetable Spread", NormalisableRange<float>(0.f, 1.f), 0),
      std::make_unique<AudioParameterFloat>(
          "osc2_pulsewidth", "Osc2 PulseWidth",
          NormalisableRange<float>(0.f, 1.f), 0.5f),
      std::make_unique<AudioParameterFloat>(
          "osc2_drift", "Osc2 Drift", NormalisableRange<float>(0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>("osc2_vec_x", "Osc2 Vector X",
                                            NormalisableRange<float>(0.f, 1.f),
                                            0.f),
      std::make_unique<AudioParameterFloat>("osc2_vec_y", "Osc2 Vector Y",
                                            NormalisableRange<float>(0.f, 1.f),
                                            0.f),
      std::make_unique<AudioParameterFloat>(
          "osc2_arp_speed", "Osc2 Arpeggiator Speed",
          NormalisableRange<float>(1.000000, 100.000000, 0, 0.354358), 20.f),
      std::make_unique<AudioParameterInt>("osc2_step_1", "Osc2 Step1", -12, 12,
                                          0),
      std::make_unique<AudioParameterInt>("osc2_step_2", "Osc2 Step2", -12, 12,
                                          12),
      std::make_unique<AudioParameterInt>("osc2_step_3", "Osc2 Step3", -12, 12,
                                          7),
      std::make_unique<AudioParameterInt>("osc2_arp_on", "Osc2 Arpeggiator On",
                                          0, 1, 0),
      std::make_unique<AudioParameterInt>("osc2_step_3_on", "Osc2 Step3 On", 0,
                                          1, 0),
      std::make_unique<AudioParameterInt>("osc2_chipnoise", "Osc2 Chipnoise", 0,
                                          1, 0),
      std::make_unique<AudioParameterInt>("osc2_carrier_ratio",
                                          "Osc2 Carrier Ratio", 1, 12, 1),
      std::make_unique<AudioParameterInt>("osc2_modulator_ratio",
                                          "Osc2 Modulator Ratio", 1, 12, 1),
      std::make_unique<AudioParameterInt>("osc2_exp_fm", "Osc2 Exponential FM",
                                          0, 1, 0),
      std::make_unique<AudioParameterFloat>("osc2_fm", "Osc2 FM/PM amount",
                                            NormalisableRange<float>(0.f, 1.f),
                                            0.f),
      std::make_unique<AudioParameterFloat>(
          "osc2_lp", "Osc2 Noise Lowpass",
          NormalisableRange<float>(80.f, 18000.f, 0.f, FILTER_SKEW_DEFAULT), 18000.f),
      std::make_unique<AudioParameterFloat>(
          "osc2_hp", "Osc2 Noise Highpass",
          NormalisableRange<float>(80.f, 18000.f, 0.f, FILTER_SKEW_DEFAULT), 80.f),
      // Osc 3
      std::make_unique<AudioParameterInt>("osc3_oct", "Osc3 Octave", -3, 3, 0),
      std::make_unique<AudioParameterInt>("osc3_semi", "Osc3 Semitones", -7, 7,
                                          0),
      std::make_unique<AudioParameterFloat>(
          "osc3_fine", "Osc3 Finetune", NormalisableRange<float>(-50.0f, 50.0f),
          0),
      std::make_unique<AudioParameterFloat>(
          "osc3_vol", "Osc3 Volume", NormalisableRange<float>(-20.0f, 12.0f),
          0),
      std::make_unique<AudioParameterInt>("osc3_reset", "Osc3 Reset", 0, 1, 0),
      std::make_unique<AudioParameterInt>("osc3_sync", "Osc3 Sync", 0, 1, 0),
      std::make_unique<AudioParameterFloat>("osc3_position", "Osc3 Wavetable Position",
                                            NormalisableRange<float>(0.f, 1.f),
                                            0),
      std::make_unique<AudioParameterFloat>(
          "osc3_detune", "Osc3 Detune", NormalisableRange<float>(0.f, 1.f), 0),
      std::make_unique<AudioParameterFloat>(
          "osc3_pos_mod", "Osc3 Position Modulation", NormalisableRange<float>(-1.f, 1.f), 0),
      std::make_unique<AudioParameterFloat>(
          "osc3_multi_position", "Osc3 Multi Position",
          NormalisableRange<float>(0.f, 1.f), 0),
      std::make_unique<AudioParameterFloat>(
          "osc3_spread", "Osc3 Wavetable Spread", NormalisableRange<float>(0.f, 1.f), 0),
      std::make_unique<AudioParameterFloat>(
          "osc3_pulsewidth", "Osc3 PulseWidth",
          NormalisableRange<float>(0.f, 1.f), 0.5f),
      std::make_unique<AudioParameterFloat>(
          "osc3_drift", "Osc3 Drift", NormalisableRange<float>(0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>("osc3_vec_x", "Osc3 Vector X",
                                            NormalisableRange<float>(0.f, 1.f),
                                            0.f),
      std::make_unique<AudioParameterFloat>("osc3_vec_y", "Osc3 Vector Y",
                                            NormalisableRange<float>(0.f, 1.f),
                                            0.f),
      std::make_unique<AudioParameterFloat>(
          "osc3_arp_speed", "Osc3 Arpeggiator Speed",
          NormalisableRange<float>(1.000000, 100.000000, 0, 0.354358), 20.f),
      std::make_unique<AudioParameterInt>("osc3_step_1", "Osc3 Step1", -12, 12,
                                          0),
      std::make_unique<AudioParameterInt>("osc3_step_2", "Osc3 Step2", -12, 12,
                                          12),
      std::make_unique<AudioParameterInt>("osc3_step_3", "Osc3 Step3", -12, 12,
                                          7),
      std::make_unique<AudioParameterInt>("osc3_arp_on", "Osc3 Arpeggiator On",
                                          0, 1, 0),
      std::make_unique<AudioParameterInt>("osc3_step_3_on", "Osc3 Step3 On", 0,
                                          1, 0),
      std::make_unique<AudioParameterInt>("osc3_chipnoise", "Osc3 Chipnoise", 0,
                                          1, 0),
      std::make_unique<AudioParameterInt>("osc3_carrier_ratio",
                                          "Osc3 Carrier Ratio", 1, 12, 1),
      std::make_unique<AudioParameterInt>("osc3_modulator_ratio",
                                          "Osc3 Modulator Ratio", 1, 12, 1),
      std::make_unique<AudioParameterInt>("osc3_exp_fm", "Osc3 Exponential FM",
                                          0, 1, 0),
      std::make_unique<AudioParameterFloat>("osc3_fm", "Osc3 FM/PM amount",
                                            NormalisableRange<float>(0.f, 1.f),
                                            0.f),
      std::make_unique<AudioParameterFloat>(
          "osc3_lp", "Osc3 Noise Lowpass",
          NormalisableRange<float>(80.f, 18000.f, 0.f, FILTER_SKEW_DEFAULT), 18000.f),
      std::make_unique<AudioParameterFloat>(
          "osc3_hp", "Osc3 Noise Highpass",
          NormalisableRange<float>(80.f, 18000.f, 0.f, FILTER_SKEW_DEFAULT), 80.f),
      // Filter1
      std::make_unique<AudioParameterInt>("fil1_osc1", "Filter1 Osc1 Input", 0,
                                          1, 1),
      std::make_unique<AudioParameterInt>("fil1_osc2", "Filter1 Osc2 Input", 0,
                                          1, 1),
      std::make_unique<AudioParameterInt>("fil1_osc3", "Filter1 Osc3 Input", 0,
                                          1, 1),
      std::make_unique<AudioParameterFloat>(
          "fil1_vel", "Filter1 Velocity Amount",
          NormalisableRange<float>(0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "fil1_env", "Filter1 Envelope Amount",
          NormalisableRange<float>(-1.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "fil1_kbd", "Filter1 Keyboard Follow",
          NormalisableRange<float>(0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "fil1_gain", "Filter1 Gain", NormalisableRange<float>(-12.f, 12.f),
          0.f),
      std::make_unique<AudioParameterFloat>(
          "fil1_freq", "Filter1 Frequency",
          NormalisableRange<float>(80.f, 18000.f, 0.f, FILTER_SKEW_DEFAULT), 2000.f),
      std::make_unique<AudioParameterFloat>("fil1_res", "Filter1 Resonance",
                                            NormalisableRange<float>(0.f, 1.f),
                                            0.f),
      std::make_unique<AudioParameterFloat>(
          "fil1_saturation", "Filter1 Saturation",
          NormalisableRange<float>(0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "fil1_sem_transition", "Filter1 SEM Transition",
          NormalisableRange<float>(-1.f, 1.f), -1.f),
      std::make_unique<AudioParameterFloat>(
          "fil1_formant_transition", "Filter1 Formant Transition",
          NormalisableRange<float>(0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "fil1_ring_mod_amount", "Filter1 RingMod Amount",
          NormalisableRange<float>(0.f, 1.f), 1.f),
      std::make_unique<AudioParameterInt>("fil1_vowel_left",
                                          "Filter1 Left Vowel", 0, 7, 0),
      std::make_unique<AudioParameterInt>("fil1_vowel_right",
                                          "Filter1 Right Vowel", 0, 7, 2),
      std::make_unique<AudioParameterInt>("fil1_comb_polarity",
                                          "Filter1 Comb Polarity", 0, 1, 0),
      // Filter2
      std::make_unique<AudioParameterInt>("fil2_osc1", "Filter2 Osc1 Input", 0,
                                          1, 0),
      std::make_unique<AudioParameterInt>("fil2_osc2", "Filter2 Osc2 Input", 0,
                                          1, 0),
      std::make_unique<AudioParameterInt>("fil2_osc3", "Filter2 Osc3 Input", 0,
                                          1, 0),
      std::make_unique<AudioParameterInt>("fil2_fil1", "Filter2 Filter1 Input",
                                          0, 1, 1),
      std::make_unique<AudioParameterFloat>(
          "fil2_vel", "Filter2 Velocity Amount",
          NormalisableRange<float>(0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "fil2_env", "Filter2 Envelope Amount",
          NormalisableRange<float>(-1.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "fil2_kbd", "Filter2 Keyboard Follow",
          NormalisableRange<float>(0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "fil2_gain", "Filter2 Gain", NormalisableRange<float>(-12.f, 12.f),
          0.f),
      std::make_unique<AudioParameterFloat>(
          "fil2_freq", "Filter2 Frequency",
          NormalisableRange<float>(80.f, 18000.f, 0.f, FILTER_SKEW_DEFAULT), 2000.f),
      std::make_unique<AudioParameterFloat>("fil2_res", "Filter2 Resonance",
                                            NormalisableRange<float>(0.f, 1.f),
                                            0.f),
      std::make_unique<AudioParameterFloat>(
          "fil2_saturation", "Filter2 Saturation",
          NormalisableRange<float>(0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "fil2_sem_transition", "Filter2 SEM Transition",
          NormalisableRange<float>(-1.f, 1.f), -1.f),
      std::make_unique<AudioParameterFloat>(
          "fil2_formant_transition", "Filter2 Formant Transition",
          NormalisableRange<float>(0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "fil2_ring_mod_amount", "Filter2 RingMod Amount",
          NormalisableRange<float>(0.f, 1.f), 1.f),
      std::make_unique<AudioParameterInt>("fil2_vowel_left",
                                          "Filter2 Left Vowel", 0, 7, 0),
      std::make_unique<AudioParameterInt>("fil2_vowel_right",
                                          "Filter2 Right Vowel", 0, 7, 2),
      std::make_unique<AudioParameterInt>("fil2_comb_polarity",
                                          "Filter2 Comb Polarity", 0, 1, 0),
      // Filter3
      std::make_unique<AudioParameterFloat>(
          "fil3_vel", "Filter3 Velocity Amount",
          NormalisableRange<float>(0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "fil3_env", "Filter3 Envelope Amount",
          NormalisableRange<float>(-1.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "fil3_kbd", "Filter3 Keyboard Follow",
          NormalisableRange<float>(0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "fil3_gain", "Filter3 Gain", NormalisableRange<float>(-12.f, 12.f),
          0.f),
      std::make_unique<AudioParameterFloat>(
          "fil3_freq", "Filter3 Frequency",
          NormalisableRange<float>(80.f, 18000.f, 0.f, FILTER_SKEW_DEFAULT), 2000.f),
      std::make_unique<AudioParameterFloat>("fil3_res", "Filter3 Resonance",
                                            NormalisableRange<float>(0.f, 1.f),
                                            0.f),
      std::make_unique<AudioParameterFloat>(
          "fil3_saturation", "Filter3 Saturation",
          NormalisableRange<float>(0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "fil3_sem_transition", "Filter3 SEM Transition",
          NormalisableRange<float>(-1.f, 1.f), -1.f),
      std::make_unique<AudioParameterFloat>(
          "fil3_formant_transition", "Filter3 Formant Transition",
          NormalisableRange<float>(0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "fil3_ring_mod_amount", "Filter3 RingMod Amount",
          NormalisableRange<float>(0.f, 1.f), 1.f),
      std::make_unique<AudioParameterInt>("fil3_vowel_left",
                                          "Filter3 Left Vowel", 0, 7, 0),
      std::make_unique<AudioParameterInt>("fil3_vowel_right",
                                          "Filter3 Right Vowel", 0, 7, 2),
      std::make_unique<AudioParameterInt>("fil3_comb_polarity",
                                          "Filter3 Comb Polarity", 0, 1, 0),
      // Amp
      std::make_unique<AudioParameterFloat>(
          "amp_width", "Amplifier Stereo Width",
          NormalisableRange<float>(-1.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>("amp_pan", "Amplifier Panorama",
                                            NormalisableRange<float>(-1.f, 1.f),
                                            0.f),
      std::make_unique<AudioParameterFloat>(
          "amp_gain", "Amplifier Gain", NormalisableRange<float>(-20.f, 12.f),
          0.f),
      // Distortion
      std::make_unique<AudioParameterFloat>(
          "dist_boost", "Distortion Boost",
          NormalisableRange<float>(0.f, 1.f), 0.3f),
      std::make_unique<AudioParameterFloat>(
          "dist_drywet", "Distortion DryWet",
          NormalisableRange<float>(0.f, 1.f, 0.f, 1.f), 1.f),
      std::make_unique<AudioParameterInt>("dist_on", "Distortion Enable", 0, 1,
                                          0),
      // ADSR1
      std::make_unique<AudioParameterFloat>(
          "env1_attack", "AmpEnv Attack",
          NormalisableRange<float>(0.001f, 10.f, 0.f, 0.300912), 0.01f),
      std::make_unique<AudioParameterFloat>(
          "env1_decay", "AmpEnv Decay",
          NormalisableRange<float>(0.001f, 10.f, 0.f, 0.300912), 1.f),
      std::make_unique<AudioParameterFloat>(
          "env1_sustain", "AmpEnv Sustain",
          NormalisableRange<float>(0.f, 1.f, 0.f, 0.575717), 0.5f),
      std::make_unique<AudioParameterFloat>(
          "env1_release", "AmpEnv Release",
          NormalisableRange<float>(0.001f, 10.f, 0.f, 0.300912), 0.01f),
      std::make_unique<AudioParameterInt>("env1_loop", "AmpEnv Loop", 0, 1, 0),
      // ADSR2
      std::make_unique<AudioParameterFloat>(
          "env2_attack", "FilterEnv Attack",
          NormalisableRange<float>(0.001f, 10.f, 0.f, 0.300912), 0.01f),
      std::make_unique<AudioParameterFloat>(
          "env2_decay", "FilterEnv Decay",
          NormalisableRange<float>(0.001f, 10.f, 0.f, 0.300912), 0.8f),
      std::make_unique<AudioParameterFloat>(
          "env2_sustain", "FilterEnv Sustain",
          NormalisableRange<float>(0.f, 1.f, 0.f, 0.575717), 0.f),
      std::make_unique<AudioParameterFloat>(
          "env2_release", "FilterEnv Release",
          NormalisableRange<float>(0.001f, 10.f, 0.f, 0.300912), 0.01f),
      std::make_unique<AudioParameterInt>("env2_loop", "FilterEnv Loop", 0, 1,
                                          0),
      // ADSR3
      std::make_unique<AudioParameterFloat>(
          "env3_attack", "ModEnv Attack",
          NormalisableRange<float>(0.001f, 10.f, 0.f, 0.300912), 0.01f),
      std::make_unique<AudioParameterFloat>(
          "env3_decay", "ModEnv Decay",
          NormalisableRange<float>(0.001f, 10.f, 0.f, 0.300912), 0.8f),
      std::make_unique<AudioParameterFloat>(
          "env3_sustain", "ModEnv Sustain",
          NormalisableRange<float>(0.f, 1.f, 0.f, 0.575717), 0.f),
      std::make_unique<AudioParameterFloat>(
          "env3_release", "ModEnv Release",
          NormalisableRange<float>(0.001f, 10.f, 0.f, 0.300912), 0.01f),
      std::make_unique<AudioParameterInt>("env3_loop", "ModEnv Loop", 0, 1, 0),
      // ADSR4
      std::make_unique<AudioParameterFloat>(
          "env4_attack", "GlobalEnv Attack",
          NormalisableRange<float>(0.001f, 10.f, 0.f, 0.300912), 0.01f),
      std::make_unique<AudioParameterFloat>(
          "env4_decay", "GlobalEnv Decay",
          NormalisableRange<float>(0.001f, 10.f, 0.f, 0.300912), 1.f),
      std::make_unique<AudioParameterFloat>(
          "env4_sustain", "GlobalEnv Sustain",
          NormalisableRange<float>(0.f, 1.f, 0.f, 0.575717), 0.5f),
      std::make_unique<AudioParameterFloat>(
          "env4_release", "GlobalEnv Release",
          NormalisableRange<float>(0.001f, 10.f, 0.f, 0.300912), 0.01f),
      std::make_unique<AudioParameterInt>("env4_loop", "GlobalEnv Loop", 0, 1,
                                          0),
      // LFO1
      std::make_unique<AudioParameterInt>("lfo1_reset", "LFO1 Reset", 0, 1, 0),
      std::make_unique<AudioParameterInt>("lfo1_sync", "LFO1 Sync", 0, 1, 0),
      std::make_unique<AudioParameterInt>("lfo1_wave", "LFO1 Waveform", 0, 20,
                                          0),
      std::make_unique<AudioParameterFloat>(
          "lfo1_freq", "LFO1 Frequency",
          NormalisableRange<float>(0.05f, 100.f, 0.f, 0.196757), 1),
      // LFO2
      std::make_unique<AudioParameterInt>("lfo2_reset", "LFO2 Reset", 0, 1, 0),
      std::make_unique<AudioParameterInt>("lfo2_sync", "LFO2 Sync", 0, 1, 0),
      std::make_unique<AudioParameterInt>("lfo2_wave", "LFO2 Waveform", 0, 20,
                                          0),
      std::make_unique<AudioParameterFloat>(
          "lfo2_freq", "LFO2 Frequency",
          NormalisableRange<float>(0.05f, 100.f, 0.f, 0.196757), 1),
      // LFO3
      std::make_unique<AudioParameterInt>("lfo3_reset", "LFO3 Reset", 0, 1, 0),
      std::make_unique<AudioParameterInt>("lfo3_sync", "LFO3 Sync", 0, 1, 0),
      std::make_unique<AudioParameterInt>("lfo3_wave", "LFO3 Waveform", 0, 20,
                                          0),
      std::make_unique<AudioParameterFloat>(
          "lfo3_freq", "LFO3 Frequency",
          NormalisableRange<float>(0.05f, 100.f, 0.f, 0.196757), 1),
      // LFO4
      std::make_unique<AudioParameterInt>("lfo4_reset", "LFO4 Reset", 0, 1, 0),
      std::make_unique<AudioParameterInt>("lfo4_sync", "LFO4 Sync", 0, 1, 0),
      std::make_unique<AudioParameterInt>("lfo4_wave", "LFO4 Waveform", 0, 20,
                                          0),
      std::make_unique<AudioParameterFloat>(
          "lfo4_freq", "LFO4 Frequency",
          NormalisableRange<float>(0.05f, 100.f, 0.f, 0.196757), 1),
      // Misc
      std::make_unique<AudioParameterInt>("fil1_to_amp", "Filter1 To Amplifier",
                                          0, 1, 0),
      std::make_unique<AudioParameterInt>("fil2_to_amp", "Filter2 To Amplifier",
                                          0, 1, 1),
      std::make_unique<AudioParameterFloat>(
          "glide", "Glide", NormalisableRange<float>(0.f, 1.f, 0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>("master", "Master", -20.f, 12.f,
                                            0.f),
      std::make_unique<AudioParameterFloat>(
          "modwheel", "Modwheel", NormalisableRange<float>(0.f, 1.f, 0.f, 1.f),
          0.f),
      std::make_unique<AudioParameterFloat>(
          "pitchbend", "Pitchbend",
          NormalisableRange<float>(-1.f, 1.f, 0.f, 1.f), 0.f),
      std::make_unique<AudioParameterInt>("pitchbend_amount",
                                          "Pitchbend Semitones", 0, 24, 12),
      std::make_unique<AudioParameterFloat>(
          "xy_x", "XY Pad X", NormalisableRange<float>(0.f, 1.f, 0.f, 1.f),
          0.f),
      std::make_unique<AudioParameterFloat>(
          "xy_y", "XY Pad Y", NormalisableRange<float>(0.f, 1.f, 0.f, 1.f),
          0.f),
      std::make_unique<AudioParameterInt>("delay_sync", "Delay Sync", 0, 1, 0),
      std::make_unique<AudioParameterInt>("delay_pingpong", "Delay PingPong", 0, 1, 0),
      std::make_unique<AudioParameterFloat>(
          "delay_time", "Delay Time",
          NormalisableRange<float>(0.01f, 3.f, 0.f, 0.627099), 1.f),
      std::make_unique<AudioParameterFloat>(
          "delay_feedback", "Delay Feedback",
          NormalisableRange<float>(0.f, 1.f, 0.f, 0.575717), 0.6f),
      std::make_unique<AudioParameterFloat>(
          "delay_hp", "Delay Highpass Frequency", NormalisableRange<float>(80.f, 18000.f, 0.f, FILTER_SKEW_DEFAULT), 80.f),
      std::make_unique<AudioParameterFloat>(
          "delay_ducking", "Delay Ducking",
          NormalisableRange<float>(0.f, 1.f, 0.f, 1.f), 0.f),
      std::make_unique<AudioParameterFloat>(
          "delay_dry", "Delay Dry",
          NormalisableRange<float>(0.f, 1.f, 0.f, 0.575717), 1.f),
      std::make_unique<AudioParameterFloat>(
          "delay_wet", "Delay Wet",
          NormalisableRange<float>(0.f, 1.f, 0.f, 0.575717), 0.8f),
      std::make_unique<AudioParameterInt>("delay_on", "Delay On", 0, 1, 0),

      // Phaser
      std::make_unique<AudioParameterInt>("phaser_sync", "Phaser Sync", 0, 1,
                                          0),
      std::make_unique<AudioParameterInt>("phaser_reset", "Phaser Reset", 0, 1,
                                          0),
      std::make_unique<AudioParameterInt>("phaser_on", "Phaser On", 0, 1, 0),
      std::make_unique<AudioParameterFloat>("phaser_freq", "Phaser Frequency",
                                            NormalisableRange<float>(40.000000, 8000.000000, 0, 0.444854), 4000),
      std::make_unique<AudioParameterFloat>(
          "phaser_feedback", "Phaser Feedback",
          NormalisableRange<float>(0.f, 1.f, 0.f, 1.f), 0.25f),
      std::make_unique<AudioParameterFloat>("phaser_rate", "Phaser Rate", NormalisableRange<float>(0.050000, 20.000000, 0, 0.211267), 0.25f),
      std::make_unique<AudioParameterFloat>(
          "phaser_mod", "Phaser Amount",
          NormalisableRange<float>(0.f, 1.f, 0.f, 1.f), 0.3f),
      std::make_unique<AudioParameterFloat>(
          "phaser_drywet", "Phaser DryWet",
          NormalisableRange<float>(0.f, 1.f, 0.f, 1.f), 1.f),
      // Flanger
      std::make_unique<AudioParameterInt>("flanger_sync", "Flanger Sync", 0, 1,
                                          0),
      std::make_unique<AudioParameterInt>("flanger_reset", "Flanger Reset", 0,
                                          1, 0),
      std::make_unique<AudioParameterInt>("flanger_on", "Flanger On", 0, 1, 0),

      std::make_unique<AudioParameterFloat>("flanger_rate", "Flanger Rate",
                                            NormalisableRange<float>(0.05f, 20.f,0,0.211267), 0.15f),
      std::make_unique<AudioParameterFloat>(
          "flanger_feedback", "Flanger Feedback", -1.f, 1.f, 0.6f),
      std::make_unique<AudioParameterFloat>(
          "flanger_amount", "Flanger Amount",
          NormalisableRange<float>(0.f, 1.f, 0.f, 1.f), 0.3f),
      std::make_unique<AudioParameterFloat>(
          "flanger_drywet", "Flanger DryWet",
          NormalisableRange<float>(0.f, 1.f, 0.f, 1.f), 1.f),
      std::make_unique<AudioParameterInt>("chorus_sync", "Chorus Sync", 0, 1,
                                          0),
      std::make_unique<AudioParameterInt>("chorus_reset", "Chorus Reset", 0, 1,
                                          0),
      std::make_unique<AudioParameterInt>("chorus_on", "Chorus On", 0, 1, 0),

      std::make_unique<AudioParameterFloat>("chorus_rate", "Chorus Rate",
                                            NormalisableRange<float>(0.05f, 20.f,0,0.211267), 0.15f),
      std::make_unique<AudioParameterFloat>(
          "chorus_amount", "Chorus Amount",
          NormalisableRange<float>(0.f, 1.f, 0.f, 1.f), 0.4f),
      std::make_unique<AudioParameterFloat>("chorus_feedback",
                                            "Chorus Feedback", -1.f, 1.f, 0.f),
      std::make_unique<AudioParameterFloat>(
          "chorus_drywet", "Chorus DryWet",
          NormalisableRange<float>(0.f, 1.f, 0.f, 1.f), 1.f),

      // ModMatrix
    //   std::make_unique<AudioParameterFloat>("amount_1_row_0", "row1_dest1_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_2_row_0", "row1_dest2_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_3_row_0", "row1_scale_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_1_row_1", "row2_dest1_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_2_row_1", "row2_dest2_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_3_row_1", "row2_scale_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_1_row_2", "row3_dest1_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_2_row_2", "row3_dest2_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_3_row_2", "row3_scale_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_1_row_3", "row4_dest1_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_2_row_3", "row4_dest2_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_3_row_3", "row4_scale_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_1_row_4", "row5_dest1_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_2_row_4", "row5_dest2_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_3_row_4", "row5_scale_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_1_row_5", "row6_dest1_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_2_row_5", "row6_dest2_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_3_row_5", "row6_scale_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_1_row_6", "row7_dest1_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_2_row_6", "row7_dest2_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_3_row_6", "row7_scale_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_1_row_7", "row8_dest1_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_2_row_7", "row8_dest2_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_3_row_7", "row8_scale_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_1_row_8", "row9_dest1_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_2_row_8", "row9_dest2_amount",
    //                                         -1, 1, 0),
    //   std::make_unique<AudioParameterFloat>("amount_3_row_8", "row9_scale_amount",
    //                                         -1, 1, 0),
}
