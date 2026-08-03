// Copyright 2011-2024 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef MATCH_FUNCTION_CALL_GRAPH_EDGES_PROXIMITY_MDINDEX_H_
#define MATCH_FUNCTION_CALL_GRAPH_EDGES_PROXIMITY_MDINDEX_H_

#include "third_party/zynamics/bindiff/match/call_graph.h"

namespace security::bindiff {

// Matches functions based on their local call graph neighborhoods. Calls and
// callees are only followed two levels deep as seen from the function in
// question.
class MatchingStepEdgesProximityMdIndex
    : public BaseMatchingStepEdgesMdIndex {
 public:
  MatchingStepEdgesProximityMdIndex()
      : BaseMatchingStepEdgesMdIndex(
            "function: edges proximity MD index",
            "Function: Edges Proximity MD Index",
            MatchingContext::kProximityMdIndexPrimary,
            MatchingContext::kProximityMdIndexSecondary) {}

 protected:
  EdgeFeature MakeEdgeFeature(CallGraph::Edge edge, CallGraph& call_graph,
                              FlowGraph*, FlowGraph*) override {
    return {edge, call_graph.GetProximityMdIndex(edge), 0.0};
  }
};

}  // namespace security::bindiff

#endif  // MATCH_FUNCTION_CALL_GRAPH_EDGES_PROXIMITY_MDINDEX_H_
