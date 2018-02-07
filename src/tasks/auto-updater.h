//
//  auto-updater.h
//  Residue
//
//  Copyright 2017-present Muflihun Labs
//
//  Author: @abumusamq
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#ifndef AutoUpdater_h
#define AutoUpdater_h

#include "src/tasks/task.h"
#include "src/core/json-object.h"

namespace residue {

class Registry;

///
/// \brief Auto updater task
///
class AutoUpdater final : public Task
{
public:
    static const std::string LATEST_RELEASE_API_URL;

    AutoUpdater(Registry* registry, unsigned int interval);

    bool hasNewVersion(std::string* newVersion);
protected:
    virtual void execute() override;

};
}
#endif /* AutoUpdater_h */