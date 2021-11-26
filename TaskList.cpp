#include "TaskList.h"

TaskList::TaskList() {

}

void TaskList::add_task(Task task) {
    this->tasks_list[this->last_index++] = task;
}

bool TaskList::is_index_exists(unsigned int index) {
    return this->tasks_list.find(index) != this->tasks_list.end();
}

Task& TaskList::get_task_by_index(unsigned int index) {
    if (this->tasks_list.find(index) == this->tasks_list.end()) throw;
    return this->tasks_list[index];
}
