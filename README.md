syntax = "proto3";
package tusimple.octodrill;
option go_package = "pkg/proto";

service Simcraft {
  rpc CreateScenarioVersion(CreateScenarioVersionRequest)
      returns (CreateScenarioVersionResponse);
  /**
   * Used to query ScenarioVersion, the relationship between different query
   * conditions is "and". If there is no qualified version, return error.
   */
  rpc FirstScenarioVersion(FirstScenarioVersionRequest)
      returns (FirstScenarioVersionResponse);
  /**
   * Used to query ScenarioVersion, the relationship between different query
   * conditions is "and". Unless otherwise specified, it is an exact search.
   * If there is no qualified ScenarioVersion, return empty.
   */
  rpc FindScenarioVersions(FindScenarioVersionsRequest)
      returns (FindScenarioVersionsResponse);
  /**
   * Fuzzy search for scenario_id, scenario_version_id, description in
   * ScenarioVersions
   */
  rpc FindScenarioVersionFields(FindScenarioVersionFieldsRequest)
      returns (FindScenarioVersionFieldsResponse);
  /**
   * Get the intersection of tags in ScenarioVersions.
   */
  rpc GetScenarioVersionTagIntersection(
      GetScenarioVersionTagIntersectionRequest)
      returns (GetScenarioVersionTagIntersectionResponse);
  rpc GetScenarioVersionTicketIntersection(
      GetScenarioVersionTicketIntersectionRequest)
      returns (GetScenarioVersionTicketIntersectionResponse);

  rpc CreateScenario(CreateScenarioRequest) returns (CreateScenarioResponse);
  rpc UpdateScenario(UpdateScenarioRequest) returns (UpdateScenarioResponse);
  rpc FirstScenario(FirstScenarioRequest) returns (FirstScenarioResponse);
  rpc FindScenarios(FindScenariosRequest) returns (FindScenariosResponse);
  rpc MoveScenarioVersionToRecycleBin(MoveScenarioVersionToRecycleBinRequest)
      returns (MoveScenarioVersionToRecycleBinResponse);
  rpc RecoverScenarioVersion(RecoverScenarioVersionRequest)
      returns (RecoverScenarioVersionResponse);

  /**
   * Used to query ScenarioResult, the relationship between different query
   * conditions is "and". Unless otherwise specified, it is an exact search.
   */
  rpc FindScenarioResult(FindScenarioResultRequest)
      returns (FindScenarioResultResponse);
  rpc CreateMetricTemplate(CreateMetricTemplateRequest)
      returns (CreateMetricTemplateResponse);
  rpc UpdateMetricTemplate(UpdateMetricTemplateRequest)
      returns (UpdateMetricTemplateResponse);
  rpc DeleteMetricTemplate(DeleteMetricTemplateRequest)
      returns (DeleteMetricTemplateResponse);
  rpc FindMetricTemplates(FindMetricTemplatesRequest)
      returns (FindMetricTemplatesResponse);

  rpc CreateEntityTemplate(CreateEntityTemplateRequest)
      returns (CreateEntityTemplateResponse);
  rpc UpdateEntityTemplate(UpdateEntityTemplateRequest)
      returns (UpdateEntityTemplateResponse);
  rpc DeleteEntityTemplate(DeleteEntityTemplateRequest)
      returns (DeleteEntityTemplateResponse);
  rpc FindEntityTemplates(FindEntityTemplatesRequest)
      returns (FindEntityTemplatesResponse);

  rpc CreateTag(CreateTagRequest) returns (CreateTagResponse);
  rpc UpdateTag(UpdateTagRequest) returns (UpdateTagResponse);
  rpc FindTags(FindTagsRequest) returns (FindTagsResponse);

  rpc FindTagTree(FindTagTreeRequest) returns (FindTagTreeResponse);
  rpc FindFlattenTagTree(FindFlattenTagTreeRequest)
      returns (FindFlattenTagTreeResponse);

  // rpci

  // rpc GetAvailableNeptuneIP(GetAvailableNeptuneIPRequest) returns
  // (GetAvailableNeptuneIPResponse);

  // rpc SubmitTask(SubmitTaskRequest) returns (SubmitTaskResponse);
  // rpc CancelTask(CancelTaskRequest) returns (CancelTaskResponse);

  rpc CreateTaskGroup(CreateTaskGroupRequest) returns (CreateTaskGroupResponse);
  rpc UpdateTaskGroup(UpdateTaskGroupRequest) returns (UpdateTaskGroupResponse);
  rpc FindTaskGroup(FindTaskGroupRequest) returns (FindTaskGroupResponse);
  rpc DeleteTaskGroup(DeleteTaskGroupRequest) returns (DeleteTaskGroupResponse);

  rpc CreateTask(CreateTaskRequest) returns (CreateTaskResponse);
  rpc UpdateTask(UpdateTaskRequest) returns (UpdateTaskResponse);
  rpc DeleteTask(DeleteTaskRequest) returns (DeleteTaskResponse);
  rpc FirstTask(FirstTaskRequest) returns (FirstTaskResponse);
  rpc FindTask(FindTaskRequest) returns (FindTaskResponse);

  // rpc Create
  // rpc Update
  // rpc Delete
  rpc GetInstanceCase(GetInstanceCaseRequest) returns (GetInstanceCaseResponse);
  rpc ReportCaseResult(ReportCaseResultRequest)
      returns (ReportCaseResultResponse);

  rpc FindStage(FindStageRequest)
      // TODO : delete it
      returns (FindStageResponse);
  rpc CreateUser(CreateUserRequest) returns (CreateUserResponse);
  rpc UpdateUser(UpdateUserRequest) returns (UpdateUserResponse);
  rpc FirstUser(FirstUserRequest) returns (FirstUserResponse);
  rpc FindUsers(FindUsersRequest) returns (FindUsersResponse);
  rpc DeleteUser(DeleteUserRequest) returns (DeleteUserResponse);

  rpc FindTickets(FindTicketsRequest) returns (FindTicketsResponse);
}

/**
 * The scenario object will be created when save as new a case.
 */
message Scenario {
  // ID of Scenario.
  uint64 ID = 1;
  /** Creator of Scenario, it is the same as the creator of */
  /** the oldest version. */
  string creator = 2;
  // Created time of Scenario, it is the same as the
  // created_time of the oldest version.
  int64 created_time = 3;
  // TODO delete
  int64 updated_time = 4;
}
/**
 * The scenarioVersion is smallest unit of task running.
 * It contains vehicles, map information, etc.
 */
message ScenarioVersion {
  // Description of ScenarioVersion.
  string description = 1;
  // Data of ScenarioVersion.
  // repeated Entity entities = 3;
  // repeated Metric metrics = 4;
  string meta_data = 2;
  // Tag ID list of ScenarioVerison.
  repeated uint64 tags = 5;
  // Group of ScenarioVersion.
  string group = 6;
  // Stage of ScenarioVersion
  string stage = 7;
  // Tickets of ScenarioVersion
  repeated string tickets = 8;
  // Used to mark whether the version is in the recycle bin.
  bool in_recycle_bin = 9;
  // ID of ScenarioVersion.
  uint64 ID = 10;
  // Index of ScenarioVersion.
  uint64 index = 11;
  // The index of the oldest version in a scenario is 1, and the index
  // will increase when a new version is created.
  string version = 12;
  // Creator of ScenarioVersion.
  string creator = 13;
  // Created time of ScenarioVersion.
  int64 created_time = 14;
  // Which scenario does the version belong to.
  Scenario scenario = 15;
}

/**
 * Logical minimum unit when searching by tag.
 */
message TagList {
  // Indicates that the tag is included.
  repeated uint64 in_tag_list = 1;
  // Indicates that the tag is not included.
  repeated uint64 not_in_tag_list = 2;
}

message Entity {
  uint64 entity_template_id = 1;
  string meta_data = 2;
}

message Metric {
  uint64 metric_template_id = 1;
  string meta_data = 2;
}

message MetricTemplate {
  string name = 1;
  string meta_data = 2;
  repeated string tags = 3;
  string owner = 4;
  string parser_id = 5;
  uint64 ID = 6;
}

message EntityTemplate {
  string name = 1;
  string meta_data = 2;
  repeated string tags = 3;
  string owner_id = 4;
  uint64 ID = 5;
}

/**
 * Task is the smallest unit for running tasks.
 */
message Task {
  // ID of Task.
  uint64 ID = 1;
  // Name of Task.
  string name = 2;
  // The group the task belongs to.
  uint64 task_group_id = 3;
  // Docker image of the task.
  string image = 4;
  // Creator of the task.
  string owner_id = 5;
  // ScenarioVersion id list of the task.
  repeated uint64 scenario_template_ids = 6;
  // Priority of the task.
  int64 priority = 7;
  // It is optional parameters of task.
  string meta_data = 8;
  // Type of Task such as Planning, Integration.
  string type = 9;
  // Fail rate of task.
  float fail_rate = 10;
  // TODO delete
  TaskGroup task_group = 11;
  // Created time of task.
  int64 created_time = 12;
  // Updated time of task.
  int64 updated_time = 13;
}

/**
 * task group is a collection of tasks.
 */
message TaskGroup {
  // ID of task group.
  uint64 ID = 1;
  // Name of task group.
  string name = 2;
  // Description of task group.
  string description = 3;
  // Base image of task group. It is also the default image of task.
  string image = 4;
  // Base scenarios of task group. It is also the default scenarios of task.
  repeated uint64 scenarios = 5;
  // The default base task when comparing tasks in the task group.
  uint64 base_taskID = 6;
  // Priority of task group.It is also the default priority of task.
  uint64 priority = 7;
  // It is optional parameters of task group. It is also
  // the default optional parameters of task.
  string meta_data = 8;
  // Creator of task group.
  string owner_id = 9;
}

/**
 * Time pair containing start and end time.
 */
message TimePair {
  // Start time. It is unix timestamp.
  int64 start_time = 1;
  // End time. It is unix timestamp.
  int64 end_time = 2;
}

message MetricResult {
  string name = 1;
  string type = 2;
  bool result = 3;
}

message MetricLevelResult {
  string name = 1;
  string type = 2;
  bool result = 3;
}

/**
 * The result of scenarioVersion running in task.
 */
message ScenarioResult {
  // Which task is ScenarioVersion running in.
  Task task = 1;
  // All data of scenarioVersion.
  ScenarioVersion scenario_template = 2;
  // Its running result in the task, including final result, level
  // result, metric result, etc. It is a json string.
  string metric_results = 3;
  // Does ScenarioVersion run to the end.
  bool is_report = 4;
  // The name of the task group associated with the task.
  string task_group_name = 5;
  // The id of the task group associated with the task.
  uint64 task_group_id = 6;
}

message CreateScenarioVersionRequest { ScenarioVersion template = 1; }
message CreateScenarioVersionResponse { ScenarioVersion template = 1; }

message FindScenarioVersionsRequest {
  // Find the version in/not in the recycle bin.
  bool in_recycle_bin = 1;
  // Find the version belonging to the scenario.
  uint64 scenario_id = 2;
  // Find the version that contains it in the description.
  string description = 3;
  // Find the version that meets the tag requirements.
  repeated TagList tags = 4;
  // Find the version that meets the ticket requirements. The relationship
  // between tickets is "or".
  repeated string tickets = 5;
  // Find the version that created by creator.
  string creator = 6;
  // Find the version whose creation time is within a period of time.
  TimePair created_time = 7;
  // Find the version whose scenario's creation time is within a period
  // of time.
  TimePair scenario_created_time = 8;
  // Find the version that scenario created by creator.
  string scenario_creator = 9;
  // Number limit of returns.
  uint64 limit = 10;
  // Offset of returns.
  uint64 offset = 11;
  // Find the version belonging to the stage.
  string stage = 12;
  // When it is true, only ScenarioVersion id will be returned.
  bool ignore_scenario_detail = 13;
  // Find the latest version or all versions. When latest=false, all versions
  // will be returned.
  bool latest = 14;
  // Use ticket fuzzy search version.
  repeated string fuzzy_tickets = 15;
  // When desc is true, the versions will be returned according
  // to the version id in descending order.
  bool desc = 16;
}
message FindScenarioVersionsResponse {
  // If ignore=false in the request, templates is not empty
  repeated ScenarioVersion templates = 1;
  // If ignore=true in the request, template_ids is not empty
  repeated uint64 template_ids = 2;
}

message FirstScenarioVersionRequest { uint64 ID = 1; }
message FirstScenarioVersionResponse { ScenarioVersion template = 1; }
message MoveScenarioVersionToRecycleBinRequest { uint64 scenario_id = 1; }
message MoveScenarioVersionToRecycleBinResponse {}
message RecoverScenarioVersionRequest { uint64 scenario_id = 1; }
message RecoverScenarioVersionResponse {}
message FindScenarioVersionFieldsRequest {
  string scenario_id = 1;
  string version = 2;
  string description = 3;
}
message FindScenarioVersionFieldsResponse {
  repeated uint64 scenario_ids = 1;
  repeated string versions = 2;
  repeated string descriptions = 3;
}
message GetScenarioVersionTagIntersectionRequest {
  repeated uint64 scenario_version_ids = 1;
}
message GetScenarioVersionTagIntersectionResponse { repeated string tags = 1; }
message GetScenarioVersionTicketIntersectionRequest {
  repeated uint64 scenario_version_ids = 1;
}
message GetScenarioVersionTicketIntersectionResponse {
  repeated string tickets = 1;
}

message CreateScenarioRequest { string creator = 1; }
message CreateScenarioResponse { Scenario scenario = 1; }
message UpdateScenarioRequest { uint64 id = 1; }
message UpdateScenarioResponse {}
message FirstScenarioRequest { uint64 id = 1; }
message FirstScenarioResponse { Scenario scenario = 1; }
message FindScenariosRequest {
  FindScenarioVersionsRequest scenario_version = 1;
  Scenario scenario = 2;
  uint64 offset = 3;
  uint64 limit = 4;
}
message FindScenariosResponse { repeated Scenario scenarios = 1; }

message FindScenarioResultRequest {
  uint64 task_id = 1;
  uint64 scenario_id = 2;
  repeated TagList tags = 3;
  repeated string stages = 4;
  repeated string tickets = 5;
  repeated bool results = 6;
  repeated MetricResult metric_results = 7;
  repeated MetricLevelResult metric_levels = 8;
  uint64 offset = 9;
  uint64 limit = 10;
  repeated string fuzzy_tickets = 11;
  repeated uint64 scenario_version_ids = 12;
  bool ignore_scenario_detail = 13;
  bool desc = 14;
}

message FindScenarioResultResponse {
  repeated ScenarioResult scenario_results = 1;
  repeated uint64 scenario_version_ids = 2;
}

message CreateMetricTemplateRequest { MetricTemplate template = 1; }
message CreateMetricTemplateResponse { MetricTemplate template = 1; }
message UpdateMetricTemplateRequest { MetricTemplate template = 1; }
message UpdateMetricTemplateResponse { MetricTemplate template = 1; }
message DeleteMetricTemplateRequest { uint64 ID = 1; }
message DeleteMetricTemplateResponse {}
message FindMetricTemplatesRequest { uint64 ID = 1; }
message FindMetricTemplatesResponse { MetricTemplate template = 1; }

message CreateEntityTemplateRequest { EntityTemplate template = 1; }
message CreateEntityTemplateResponse { EntityTemplate template = 1; }
message UpdateEntityTemplateRequest { EntityTemplate template = 1; }
message UpdateEntityTemplateResponse { EntityTemplate template = 2; }
message DeleteEntityTemplateRequest { uint64 ID = 1; }
message DeleteEntityTemplateResponse {}
message FindEntityTemplatesRequest { uint64 ID = 1; }
message FindEntityTemplatesResponse { EntityTemplate template = 2; }

/**
 * ScenarioVersion label.
 */
message Tag {
  // ID of tag. Will not be modified once created.
  uint64 ID = 1;
  // Name of tag.
  string name = 2;
  // Meta Data of tag.
  string meta_data = 3;
  // Parent id of tag.
  uint64 parent_id = 4;
  // Description of tag.
  string description = 5;
  // Used to mark whether the tag has been deleted
  bool deleted = 6;
  // Creator of tag.
  string creator = 7;
  // Whether the tag can be assign to a scenario.
  bool not_tag = 8;
}
message CreateTagRequest {
  // Note:
  // If the tag.id is not empty, The value of the tag.ID will be ignored.
  Tag tag = 1;
}
/**
 * Note:
 * If the tag.id is not empty, The value of the tag.ID will be ignored.
 *
 * If the tag.name already exists, codes.AlreadyExists will be returned.
 * If the tag.parent_id not exists,
 * codes.InvalidArgument will be returned.If the tag.parent_id is deleted,
 * codes.InvalidArgument will be returned.
 */
message CreateTagResponse { Tag tag = 1; }
message UpdateTagRequest {
  /** Note:
   * If the tag.id is empty, codes.InvalidArgument will be returned.
   * If the tag.name already exists, codes.AlreadyExists will be returned.
   */
  Tag tag = 1;
}
message UpdateTagResponse { Tag tag = 1; }
message DeleteTagRequest { uint64 ID = 1; }
message DeleteTagResponse {}
message FindTagsRequest {
  uint64 ID = 1;
  string name = 2;
  uint64 offset = 3;
  uint64 limit = 4;
}
message FindTagsResponse { repeated Tag tags = 1; }

/**
 * Shows the tree structure of the tag. Each node in the tree only has tag id.
 */
message TagTree {
  // Parent tag id of subtree.
  uint64 parent_id = 1;
  // Subtree.
  repeated TagTree children = 2;
}
message FindTagTreeRequest { uint64 tag_id = 1; }
message FindTagTreeResponse { TagTree tag_tree = 1; }
message FindFlattenTagTreeRequest { uint64 tag_id = 1; }
message FindFlattenTagTreeResponse { repeated uint64 tag_ids = 1; }
message CreateTaskRequest { Task task = 1; }
message CreateTaskResponse { Task task = 2; }
message UpdateTaskRequest { Task task = 1; }
message UpdateTaskResponse {}
message DeleteTaskRequest { uint64 ID = 1; }
message DeleteTaskResponse {}
message FirstTaskRequest { uint64 ID = 1; }
message FirstTaskResponse { Task task = 1; }
message FindTaskRequest {
  uint64 ID = 1;
  string name = 2;
  string type = 3;
  string status = 4;
  string image = 5;
  string owner_id = 6;
  TimePair create_time = 7;
  uint64 task_group_id = 8;
  uint64 offset = 9;
  uint64 limit = 10;
}
message FindTaskResponse { repeated Task tasks = 1; }

message StartInstanceForScenarioTemplateRequest {}
message StartInstanceForScenarioTemplateResponse {}
message StopInstanceForScenarioTemplateRequest {}
message StopInstanceForScenarioTemplateResponse {}
message GetInstanceCaseRequest {
  uint64 task_id = 1;
  uint64 instance_id = 2;
}

message ScenarioCase {
  uint64 scenario_history_id = 1;
  string scenario_name = 2;
  string global_id = 3;
  string group = 4;
  bool record = 5;
  int32 case_index = 6;
  int32 group_index = 7;
  string config = 8;
}
message GetInstanceCaseResponse {
  repeated ScenarioCase scenario_cases = 1;
  int32 back_off_seconds = 2;
}

message ReportCaseResultRequest {
  uint64 task_id = 1;
  uint64 scenario_case_id = 2;
  string result = 3;
  uint64 instance_id = 4;
}
message ReportCaseResultResponse {}

message CreateTaskGroupRequest { TaskGroup task_group = 1; }
message CreateTaskGroupResponse { TaskGroup task_group = 1; }
message UpdateTaskGroupRequest { TaskGroup task_group = 1; }
message UpdateTaskGroupResponse { TaskGroup task_group = 1; }
message FindTaskGroupRequest {
  uint64 ID = 1;
  string name = 2;
  string description = 3;
  string owner_id = 4;
  TimePair create_time = 5;
  TimePair last_run_time = 6;
  uint64 offset = 7;
  uint64 limit = 8;
}
message FindTaskGroupResponse { repeated TaskGroup task_groups = 1; }
message DeleteTaskGroupRequest { uint64 ID = 1; }
message DeleteTaskGroupResponse {}

message FindStageRequest {}
message FindStageResponse { repeated string stages = 1; }

message User { string name = 1; }
message CreateUserRequest { User user = 1; }
message CreateUserResponse { User user = 1; }
message UpdateUserRequest { User user = 1; }
message UpdateUserResponse { User user = 1; }
message FirstUserRequest { string name = 1; }
message FirstUserResponse { User user = 1; }
message FindUsersRequest {
  uint64 offset = 1;
  uint64 limit = 2;
}
message FindUsersResponse { repeated User users = 1; }
message DeleteUserRequest { string name = 1; }
message DeleteUserResponse {};

message FindTicketsRequest {
  uint64 offset = 1;
  uint64 limit = 2;
}
message FindTicketsResponse { repeated string tickets = 1; }
