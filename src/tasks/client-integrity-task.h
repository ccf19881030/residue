//
//  client-integrity-task.h
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

#ifndef ClientIntegrityTask_h
#define ClientIntegrityTask_h

#include "src/tasks/task.h"

namespace residue {

class Registry;

///
/// \brief Task to check integrity of the clients (and their tokens).
/// If invalid, this task will remove it from the registry
///
class ClientIntegrityTask : public Task
{
public:
    explicit ClientIntegrityTask(Registry* registry,
                                 unsigned int interval);
protected:
    virtual void execute() override;
};
}
#endif /* ClientIntegrityTask_h */
