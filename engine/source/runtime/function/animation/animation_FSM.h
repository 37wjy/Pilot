#pragma once
#include <functional>
#include <json11.hpp>
#include <vector>
#include <map>
#include <string>
namespace Pilot
{
    class AnimationFSM
    {
        // std::vector<AnimationFSMNode> m_nodes;
        enum class States
        {
            _idle,
            _walk_start,
            _walk_run,
            _walk_stop,
            _jump_start_from_idle,
            _jump_loop_from_idle,
            _jump_end_from_idle,
            _jump_start_from_walk_run,
            _jump_loop_from_walk_run,
            _jump_end_from_walk_run,
            _count
        };

        //debug 用
        std::map<States,std::string> StatesName{
            {States::_idle,"_idle"},
            {States::_walk_start,"_walk_start"},
            {States::_walk_run,"_walk_run"},
            {States::_walk_stop,"_walk_stop"},
            {States::_jump_start_from_idle,"_jump_start_from_idle"},
            {States::_jump_loop_from_idle,"_jump_loop_from_idle"},
            {States::_jump_end_from_idle,"_jump_end_from_idle"},
            {States::_jump_start_from_walk_run,"_jump_start_from_walk_run"},
            {States::_jump_loop_from_walk_run,"_jump_loop_from_walk_run"},
            {States::_jump_end_from_walk_run,"_jump_end_from_walk_run"},
            {States::_count,"_count"}
        };
        
        States m_state {States::_idle};

    public:
        AnimationFSM();
        void        setStates(States state);
        bool        update(const json11::Json::object& signals);
        std::string getCurrentClipBaseName() const;
    };
} // namespace Pilot