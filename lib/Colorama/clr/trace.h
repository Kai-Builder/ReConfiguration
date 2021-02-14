//
// Created by seymo on 1/31/2021.
//

#ifndef COLORAMA_TRACE_H
#define COLORAMA_TRACE_H

class SystemColors {
public:
	virtual void choose(int color) {
		system(("color " + std::to_string(color)).c_str());
	}
};

#endif //COLORAMA_TRACE_H
