#include "kain.hpp"


// The plugin-wide instance of the Plugin class
Plugin *plugin;

void init(rack::Plugin *p) {
	plugin = p;
	// This is the unique identifier for your plugin
	p->slug = "Kain";
#ifdef VERSION
	p->version = TOSTRING(VERSION);
#endif
	p->website = "https://phdsg.github.io/PvC/";
	// For each module, specify the ModuleWidget subclass, manufacturer slug (for saving in patches), manufacturer human-readable name, module slug, and module name
	p->addModel(createModel<ShiftieWidget>("Kain", "Shiftie", "Shiftie", UTILITY_TAG));

	// Any other plugin initialization may go here.
	// As an alternative, consider lazy-loading assets and lookup tables when your module is created to reduce startup times of Rack.
}
