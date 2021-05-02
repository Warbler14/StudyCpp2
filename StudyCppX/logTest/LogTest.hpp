//
//  LogTest.hpp
//  StudyCppX
//
//  Created by kook on 2021/05/02.
//

#ifndef LogTest_hpp
#define LogTest_hpp

#include <iostream>
#include <string>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/stopwatch.h>

using namespace std;

class LogTest {
private:

    const string logger_name = "basic_logger";
    const string filename = "/Users/kook/workspaces/cwork/logs/basic-log.txt";
    
public:
    void example01();
    void stopwatch();
    
    LogTest() {
        
        try {
            auto logger = spdlog::basic_logger_mt(logger_name, filename);
        
            spdlog::set_default_logger(logger);
            
        } catch (const spdlog::spdlog_ex &ex) {
            cout << "log init failed: " << ex.what() << endl;
        }
        
        spdlog::flush_on(spdlog::level::debug);
        
        spdlog::flush_every(std::chrono::seconds(3));
        
        
        
        
    }
    
    
};

#endif /* LogTest_hpp */
