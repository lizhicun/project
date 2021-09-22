# Protocol Documentation
<a name="top"></a>

## Table of Contents

- [proto/api.proto](#proto/api.proto)
    - [Simcraft](#tusimple.octodrill.Simcraft)
  
- [Scalar Value Types](#scalar-value-types)



<a name="proto/api.proto"></a>
<p align="right"><a href="#top">Top</a></p>

## proto/api.proto



<a name="tusimple.octodrill.Simcraft"></a>

### Simcraft


#### CreateScenarioVersion  
  
- [CreateScenarioVersionRequest](#tusimple.octodrill.CreateScenarioVersionRequest) 
- [CreateScenarioVersionResponse](#tusimple.octodrill.CreateScenarioVersionResponse) 
#### FirstScenarioVersion  
 Used to query single ScenarioVersion. 
- [FirstScenarioVersionRequest](#tusimple.octodrill.FirstScenarioVersionRequest) 
- [FirstScenarioVersionResponse](#tusimple.octodrill.FirstScenarioVersionResponse) 
#### FindScenarioVersions  
 Used to query ScenarioVersion, the relationship between different query conditions is "and". Unless otherwise specified, it is an exact search. If there is no qualified ScenarioVersion, return empty. 
- [FindScenarioVersionsRequest](#tusimple.octodrill.FindScenarioVersionsRequest) 
- [FindScenarioVersionsResponse](#tusimple.octodrill.FindScenarioVersionsResponse) 
#### UpdateScenarioVersions  
  
- [UpdateScenarioVersionsRequest](#tusimple.octodrill.UpdateScenarioVersionsRequest) 
- [UpdateScenarioVersionsResponse](#tusimple.octodrill.UpdateScenarioVersionsResponse) 
#### FindScenarioVersionFields  
 Fuzzy search for scenario_id, scenario_version_id, description in ScenarioVersions 
- [FindScenarioVersionFieldsRequest](#tusimple.octodrill.FindScenarioVersionFieldsRequest) 
- [FindScenarioVersionFieldsResponse](#tusimple.octodrill.FindScenarioVersionFieldsResponse) 
#### GetScenarioVersionTagIntersection  
 Get the intersection of tags in ScenarioVersions. 
- [GetScenarioVersionTagIntersectionRequest](#tusimple.octodrill.GetScenarioVersionTagIntersectionRequest) 
- [GetScenarioVersionTagIntersectionResponse](#tusimple.octodrill.GetScenarioVersionTagIntersectionResponse) 
#### GetScenarioVersionTicketIntersection  
  
- [GetScenarioVersionTicketIntersectionRequest](#tusimple.octodrill.GetScenarioVersionTicketIntersectionRequest) 
- [GetScenarioVersionTicketIntersectionResponse](#tusimple.octodrill.GetScenarioVersionTicketIntersectionResponse) 
#### CreateScenario  
  
- [CreateScenarioRequest](#tusimple.octodrill.CreateScenarioRequest) 
- [CreateScenarioResponse](#tusimple.octodrill.CreateScenarioResponse) 
#### UpdateScenario  
  
- [UpdateScenarioRequest](#tusimple.octodrill.UpdateScenarioRequest) 
- [UpdateScenarioResponse](#tusimple.octodrill.UpdateScenarioResponse) 
#### FirstScenario  
  
- [FirstScenarioRequest](#tusimple.octodrill.FirstScenarioRequest) 
- [FirstScenarioResponse](#tusimple.octodrill.FirstScenarioResponse) 
#### MoveScenarioToRecycleBin  
  
- [MoveScenarioToRecycleBinRequest](#tusimple.octodrill.MoveScenarioToRecycleBinRequest) 
- [MoveScenarioToRecycleBinResponse](#tusimple.octodrill.MoveScenarioToRecycleBinResponse) 
#### RecoverScenario  
  
- [RecoverScenarioRequest](#tusimple.octodrill.RecoverScenarioRequest) 
- [RecoverScenarioResponse](#tusimple.octodrill.RecoverScenarioResponse) 
#### FindScenarioResult  
 Used to query ScenarioResult, the relationship between different query conditions is "and". Unless otherwise specified, it is an exact search. 
- [FindScenarioResultRequest](#tusimple.octodrill.FindScenarioResultRequest) 
- [FindScenarioResultResponse](#tusimple.octodrill.FindScenarioResultResponse) 
#### CreateMetricTemplate  
  
- [CreateMetricTemplateRequest](#tusimple.octodrill.CreateMetricTemplateRequest) 
- [CreateMetricTemplateResponse](#tusimple.octodrill.CreateMetricTemplateResponse) 
#### UpdateMetricTemplate  
  
- [UpdateMetricTemplateRequest](#tusimple.octodrill.UpdateMetricTemplateRequest) 
- [UpdateMetricTemplateResponse](#tusimple.octodrill.UpdateMetricTemplateResponse) 
#### DeleteMetricTemplate  
  
- [DeleteMetricTemplateRequest](#tusimple.octodrill.DeleteMetricTemplateRequest) 
- [DeleteMetricTemplateResponse](#tusimple.octodrill.DeleteMetricTemplateResponse) 
#### FindMetricTemplates  
  
- [FindMetricTemplatesRequest](#tusimple.octodrill.FindMetricTemplatesRequest) 
- [FindMetricTemplatesResponse](#tusimple.octodrill.FindMetricTemplatesResponse) 
#### CreateEntityTemplate  
  
- [CreateEntityTemplateRequest](#tusimple.octodrill.CreateEntityTemplateRequest) 
- [CreateEntityTemplateResponse](#tusimple.octodrill.CreateEntityTemplateResponse) 
#### UpdateEntityTemplate  
  
- [UpdateEntityTemplateRequest](#tusimple.octodrill.UpdateEntityTemplateRequest) 
- [UpdateEntityTemplateResponse](#tusimple.octodrill.UpdateEntityTemplateResponse) 
#### DeleteEntityTemplate  
  
- [DeleteEntityTemplateRequest](#tusimple.octodrill.DeleteEntityTemplateRequest) 
- [DeleteEntityTemplateResponse](#tusimple.octodrill.DeleteEntityTemplateResponse) 
#### FindEntityTemplates  
  
- [FindEntityTemplatesRequest](#tusimple.octodrill.FindEntityTemplatesRequest) 
- [FindEntityTemplatesResponse](#tusimple.octodrill.FindEntityTemplatesResponse) 
#### CreateTag  
  
- [CreateTagRequest](#tusimple.octodrill.CreateTagRequest) 
- [CreateTagResponse](#tusimple.octodrill.CreateTagResponse) 
#### UpdateTag  
  
- [UpdateTagRequest](#tusimple.octodrill.UpdateTagRequest) 
- [UpdateTagResponse](#tusimple.octodrill.UpdateTagResponse) 
#### FindTags  
  
- [FindTagsRequest](#tusimple.octodrill.FindTagsRequest) 
- [FindTagsResponse](#tusimple.octodrill.FindTagsResponse) 
#### FindTagTree  
  
- [FindTagTreeRequest](#tusimple.octodrill.FindTagTreeRequest) 
- [FindTagTreeResponse](#tusimple.octodrill.FindTagTreeResponse) 
#### FindFlattenTagTree  
  
- [FindFlattenTagTreeRequest](#tusimple.octodrill.FindFlattenTagTreeRequest) 
- [FindFlattenTagTreeResponse](#tusimple.octodrill.FindFlattenTagTreeResponse) 
#### DeleteTagTree  
  
- [DeleteTagTreeRequest](#tusimple.octodrill.DeleteTagTreeRequest) 
- [DeleteTagTreeResponse](#tusimple.octodrill.DeleteTagTreeResponse) 
#### CreateTaskGroup  
  
- [CreateTaskGroupRequest](#tusimple.octodrill.CreateTaskGroupRequest) 
- [CreateTaskGroupResponse](#tusimple.octodrill.CreateTaskGroupResponse) 
#### UpdateTaskGroup  
  
- [UpdateTaskGroupRequest](#tusimple.octodrill.UpdateTaskGroupRequest) 
- [UpdateTaskGroupResponse](#tusimple.octodrill.UpdateTaskGroupResponse) 
#### FirstTaskGroup  
 Used to query single TaskGroup by task group ID. If there is no qualified TaskGroup, return the error NotFound. 
- [FirstTaskGroupRequest](#tusimple.octodrill.FirstTaskGroupRequest) 
- [FirstTaskGroupResponse](#tusimple.octodrill.FirstTaskGroupResponse) 
#### FindTaskGroup  
 Used to query TaskGroup, the relationship between different query conditions is "and". If there is no qualified TaskGroup, return empty. Unless otherwise specified, it is an exact search. 
- [FindTaskGroupRequest](#tusimple.octodrill.FindTaskGroupRequest) 
- [FindTaskGroupResponse](#tusimple.octodrill.FindTaskGroupResponse) 
#### GetTaskGroupsUsedByTaskGroupListPage  
 It is only provided to the Task Group List part of the frontend of octodrill-job. It returns an ordered task group list. The default order is: all Favorite Task Groups are first, and other Task Groups are behind. Then sort them in reverse order of creation time. 
- [GetTaskGroupsUsedByTaskGroupListPageRequest](#tusimple.octodrill.GetTaskGroupsUsedByTaskGroupListPageRequest) 
- [GetTaskGroupsUsedByTaskGroupListPageResponse](#tusimple.octodrill.GetTaskGroupsUsedByTaskGroupListPageResponse) 
#### AddFavoriteTaskGroup  
 Used to add favorite TaskGroup. FavoriteTaskGroup and User have a many-to-many relationship. 
- [AddFavoriteTaskGroupRequest](#tusimple.octodrill.AddFavoriteTaskGroupRequest) 
- [AddFavoriteTaskGroupResponse](#tusimple.octodrill.AddFavoriteTaskGroupResponse) 
#### CreateTask  
  
- [CreateTaskRequest](#tusimple.octodrill.CreateTaskRequest) 
- [CreateTaskResponse](#tusimple.octodrill.CreateTaskResponse) 
#### UpdateTask  
  
- [UpdateTaskRequest](#tusimple.octodrill.UpdateTaskRequest) 
- [UpdateTaskResponse](#tusimple.octodrill.UpdateTaskResponse) 
#### DeleteTask  
  
- [DeleteTaskRequest](#tusimple.octodrill.DeleteTaskRequest) 
- [DeleteTaskResponse](#tusimple.octodrill.DeleteTaskResponse) 
#### FirstTask  
  
- [FirstTaskRequest](#tusimple.octodrill.FirstTaskRequest) 
- [FirstTaskResponse](#tusimple.octodrill.FirstTaskResponse) 
#### FindTask  
  
- [FindTaskRequest](#tusimple.octodrill.FindTaskRequest) 
- [FindTaskResponse](#tusimple.octodrill.FindTaskResponse) 
#### GetInstanceCase  
 rpc Create rpc Update rpc Delete 
- [GetInstanceCaseRequest](#tusimple.octodrill.GetInstanceCaseRequest) 
- [GetInstanceCaseResponse](#tusimple.octodrill.GetInstanceCaseResponse) 
#### ReportCaseResult  
  
- [ReportCaseResultRequest](#tusimple.octodrill.ReportCaseResultRequest) 
- [ReportCaseResultResponse](#tusimple.octodrill.ReportCaseResultResponse) 
#### CreateUser  
  
- [CreateUserRequest](#tusimple.octodrill.CreateUserRequest) 
- [CreateUserResponse](#tusimple.octodrill.CreateUserResponse) 
#### UpdateUser  
  
- [UpdateUserRequest](#tusimple.octodrill.UpdateUserRequest) 
- [UpdateUserResponse](#tusimple.octodrill.UpdateUserResponse) 
#### FirstUser  
  
- [FirstUserRequest](#tusimple.octodrill.FirstUserRequest) 
- [FirstUserResponse](#tusimple.octodrill.FirstUserResponse) 
#### FindUsers  
  
- [FindUsersRequest](#tusimple.octodrill.FindUsersRequest) 
- [FindUsersResponse](#tusimple.octodrill.FindUsersResponse) 
#### DeleteUser  
  
- [DeleteUserRequest](#tusimple.octodrill.DeleteUserRequest) 
- [DeleteUserResponse](#tusimple.octodrill.DeleteUserResponse) 
#### FindTickets  
  
- [FindTicketsRequest](#tusimple.octodrill.FindTicketsRequest) 
- [FindTicketsResponse](#tusimple.octodrill.FindTicketsResponse) 

 <!-- end services -->


<a name="tusimple.octodrill.AddFavoriteTaskGroupRequest"></a>

### AddFavoriteTaskGroupRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task_group_id | [uint64](#uint64) |  |  |
| user | [string](#string) |  |  |






<a name="tusimple.octodrill.AddFavoriteTaskGroupResponse"></a>

### AddFavoriteTaskGroupResponse







<a name="tusimple.octodrill.CreateEntityTemplateRequest"></a>

### CreateEntityTemplateRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| template | [EntityTemplate](#tusimple.octodrill.EntityTemplate) |  |  |






<a name="tusimple.octodrill.CreateEntityTemplateResponse"></a>

### CreateEntityTemplateResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| template | [EntityTemplate](#tusimple.octodrill.EntityTemplate) |  |  |






<a name="tusimple.octodrill.CreateMetricTemplateRequest"></a>

### CreateMetricTemplateRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| template | [MetricTemplate](#tusimple.octodrill.MetricTemplate) |  |  |






<a name="tusimple.octodrill.CreateMetricTemplateResponse"></a>

### CreateMetricTemplateResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| template | [MetricTemplate](#tusimple.octodrill.MetricTemplate) |  |  |






<a name="tusimple.octodrill.CreateScenarioRequest"></a>

### CreateScenarioRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| creator | [string](#string) |  |  |






<a name="tusimple.octodrill.CreateScenarioResponse"></a>

### CreateScenarioResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario | [Scenario](#tusimple.octodrill.Scenario) |  |  |






<a name="tusimple.octodrill.CreateScenarioVersionRequest"></a>

### CreateScenarioVersionRequest
#### Note
1. If request.template.scenario.id is empty, generate a new Scenario;
2. If request.template.creator not exists, generate a new User;
3. If request.template.ID is not empty, the backend will ignore the specified
id and regenerate it. Similar to index and version;


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| template | [ScenarioVersion](#tusimple.octodrill.ScenarioVersion) |  |  |






<a name="tusimple.octodrill.CreateScenarioVersionResponse"></a>

### CreateScenarioVersionResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| template | [ScenarioVersion](#tusimple.octodrill.ScenarioVersion) |  |  |






<a name="tusimple.octodrill.CreateTagRequest"></a>

### CreateTagRequest
#### Note:
1. If request.tag.ID is not empty, the backend will ignore the specified
id and regenerate it;
2. If request.tag.name already exists, error InvalidArgument will be
returned;
3. If request.tag.parent_id not exists, error InvalidArgument will be
returned;
4. If request.tag.parent_id is deleted, error InvalidArgument will be
returned;


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tag | [Tag](#tusimple.octodrill.Tag) |  |  |






<a name="tusimple.octodrill.CreateTagResponse"></a>

### CreateTagResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tag | [Tag](#tusimple.octodrill.Tag) |  |  |






<a name="tusimple.octodrill.CreateTaskGroupRequest"></a>

### CreateTaskGroupRequest
#### Note
1. The ID, frequency, last_fail_rate, created_time, updated_time in the
request.task_group will be ignored;
2. If request.task_group.creator not exists, generate a new User;
3. If request.task_group.image is empty, error InvalidArgument will be
returned;
4. At least one of req.task_group.scenarios and
req.task_group.scenario_condition is not empty, otherwise it will return
invalidArgument;
5. If the scenario found by req.task_group.scenario_condition is empty, error
InvalidArgument will be returned;


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task_group | [TaskGroup](#tusimple.octodrill.TaskGroup) |  |  |






<a name="tusimple.octodrill.CreateTaskGroupResponse"></a>

### CreateTaskGroupResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| id | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.CreateTaskRequest"></a>

### CreateTaskRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task | [Task](#tusimple.octodrill.Task) |  |  |






<a name="tusimple.octodrill.CreateTaskResponse"></a>

### CreateTaskResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| id | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.CreateUserRequest"></a>

### CreateUserRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| user | [User](#tusimple.octodrill.User) |  |  |






<a name="tusimple.octodrill.CreateUserResponse"></a>

### CreateUserResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| user | [User](#tusimple.octodrill.User) |  |  |






<a name="tusimple.octodrill.DeleteEntityTemplateRequest"></a>

### DeleteEntityTemplateRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.DeleteEntityTemplateResponse"></a>

### DeleteEntityTemplateResponse







<a name="tusimple.octodrill.DeleteMetricTemplateRequest"></a>

### DeleteMetricTemplateRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.DeleteMetricTemplateResponse"></a>

### DeleteMetricTemplateResponse







<a name="tusimple.octodrill.DeleteTagTreeRequest"></a>

### DeleteTagTreeRequest
#### Note
1. If request.tag_id not exists, error InvalidArgument will be returned;


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tag_id | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.DeleteTagTreeResponse"></a>

### DeleteTagTreeResponse







<a name="tusimple.octodrill.DeleteTaskRequest"></a>

### DeleteTaskRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.DeleteTaskResponse"></a>

### DeleteTaskResponse







<a name="tusimple.octodrill.DeleteUserRequest"></a>

### DeleteUserRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| name | [string](#string) |  |  |






<a name="tusimple.octodrill.DeleteUserResponse"></a>

### DeleteUserResponse







<a name="tusimple.octodrill.DockerImage"></a>

### DockerImage



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| type | [DockerImage.ImageType](#tusimple.octodrill.DockerImage.ImageType) |  |  |
| list | [string](#string) | repeated |  |






<a name="tusimple.octodrill.Entity"></a>

### Entity



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| entity_template_id | [uint64](#uint64) |  |  |
| meta_data | [string](#string) |  |  |






<a name="tusimple.octodrill.EntityTemplate"></a>

### EntityTemplate



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| name | [string](#string) |  |  |
| meta_data | [string](#string) |  |  |
| tags | [string](#string) | repeated |  |
| owner_id | [string](#string) |  |  |
| ID | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FindEntityTemplatesRequest"></a>

### FindEntityTemplatesRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FindEntityTemplatesResponse"></a>

### FindEntityTemplatesResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| template | [EntityTemplate](#tusimple.octodrill.EntityTemplate) |  |  |






<a name="tusimple.octodrill.FindFlattenTagTreeRequest"></a>

### FindFlattenTagTreeRequest
#### Note
1. If request.tag_id not exists, error InvalidArgument will be returned;


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tag_id | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FindFlattenTagTreeResponse"></a>

### FindFlattenTagTreeResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tag_ids | [uint64](#uint64) | repeated |  |






<a name="tusimple.octodrill.FindMetricTemplatesRequest"></a>

### FindMetricTemplatesRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FindMetricTemplatesResponse"></a>

### FindMetricTemplatesResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| template | [MetricTemplate](#tusimple.octodrill.MetricTemplate) |  |  |






<a name="tusimple.octodrill.FindScenarioResultRequest"></a>

### FindScenarioResultRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task_id | [uint64](#uint64) |  |  |
| scenario_id | [uint64](#uint64) |  |  |
| tags | [TagList](#tusimple.octodrill.TagList) | repeated |  |
| stages | [string](#string) | repeated |  |
| tickets | [string](#string) | repeated |  |
| results | [bool](#bool) | repeated |  |
| metric_results | [MetricResult](#tusimple.octodrill.MetricResult) | repeated |  |
| metric_levels | [MetricLevelResult](#tusimple.octodrill.MetricLevelResult) | repeated |  |
| offset | [uint64](#uint64) |  |  |
| limit | [uint64](#uint64) |  |  |
| fuzzy_tickets | [string](#string) | repeated |  |
| scenario_version_ids | [uint64](#uint64) | repeated |  |
| ignore_scenario_detail | [bool](#bool) |  |  |
| desc | [bool](#bool) |  |  |






<a name="tusimple.octodrill.FindScenarioResultResponse"></a>

### FindScenarioResultResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_results | [ScenarioResult](#tusimple.octodrill.ScenarioResult) | repeated |  |
| scenario_version_ids | [uint64](#uint64) | repeated |  |
| total | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FindScenarioVersionFieldsRequest"></a>

### FindScenarioVersionFieldsRequest
Find by regular expression *scenario_id*, *version*, *description*


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_id | [string](#string) |  |  |
| version | [string](#string) |  |  |
| description | [string](#string) |  |  |
| in_recycle_bin | [bool](#bool) |  |  |






<a name="tusimple.octodrill.FindScenarioVersionFieldsResponse"></a>

### FindScenarioVersionFieldsResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_ids | [uint64](#uint64) | repeated |  |
| versions | [string](#string) | repeated |  |
| descriptions | [string](#string) | repeated |  |






<a name="tusimple.octodrill.FindScenarioVersionsRequest"></a>

### FindScenarioVersionsRequest
#### Note
1. If the query parameters are incorrect, such as querying the scenario
version with a tag id that does not exist, it will return empty instead of
returning an error;


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| in_recycle_bin | [bool](#bool) |  | Find the version in/not in the recycle bin. |
| scenario_id | [uint64](#uint64) |  | Find the version belonging to the scenario. |
| description | [string](#string) |  | Find the version that contains it in the description. |
| tags | [TagList](#tusimple.octodrill.TagList) | repeated | Find the version that meets the tag requirements. |
| tickets | [string](#string) | repeated | Find the version that meets the ticket requirements. The relationship between tickets is "or". |
| creator | [string](#string) |  | Find the version that created by creator. |
| created_time | [TimePair](#tusimple.octodrill.TimePair) |  | Find the version whose creation time is within a period of time. |
| scenario_created_time | [TimePair](#tusimple.octodrill.TimePair) |  | Find the version whose scenario's creation time is within a period of time. |
| scenario_creator | [string](#string) |  | Find the version that scenario created by creator. |
| limit | [uint64](#uint64) |  | Number limit of returns. |
| offset | [uint64](#uint64) |  | Offset of returns. |
| stage | [string](#string) |  | Find the version belonging to the stage. |
| ignore_scenario_detail | [bool](#bool) |  | When it is true, only ScenarioVersion id and Scenario id will be returned. |
| latest | [bool](#bool) |  | Find the latest version or all versions. When latest=false, all versions will be returned. |
| fuzzy_tickets | [string](#string) | repeated | Use ticket fuzzy search version. |
| desc | [bool](#bool) |  | When desc is true, the versions will be returned according to the version id in descending order. |






<a name="tusimple.octodrill.FindScenarioVersionsResponse"></a>

### FindScenarioVersionsResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| templates | [ScenarioVersion](#tusimple.octodrill.ScenarioVersion) | repeated |  |
| total | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FindStageRequest"></a>

### FindStageRequest







<a name="tusimple.octodrill.FindStageResponse"></a>

### FindStageResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| stages | [string](#string) | repeated |  |






<a name="tusimple.octodrill.FindTagTreeRequest"></a>

### FindTagTreeRequest
#### Note
1. If request.tag_id not exists, error InvalidArgument will be returned;


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tag_id | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FindTagTreeResponse"></a>

### FindTagTreeResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tag_tree | [TagTree](#tusimple.octodrill.TagTree) |  |  |






<a name="tusimple.octodrill.FindTagsRequest"></a>

### FindTagsRequest
#### Note
1. It will return empty array if no ScenarioVersion is found;


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  |  |
| name | [string](#string) |  |  |
| offset | [uint64](#uint64) |  |  |
| limit | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FindTagsResponse"></a>

### FindTagsResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tags | [Tag](#tusimple.octodrill.Tag) | repeated |  |






<a name="tusimple.octodrill.FindTaskGroupRequest"></a>

### FindTaskGroupRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  | ID of task group |
| name | [string](#string) |  | Name of task group. It is fuzzy matching. |
| description | [string](#string) |  | Description of task group. It is fuzzy matching. |
| creator | [string](#string) |  | Creator of task group |
| create_time | [TimePair](#tusimple.octodrill.TimePair) |  | Create time of task group |
| last_run_time | [TimePair](#tusimple.octodrill.TimePair) |  | Last run time of task group |
| offset | [uint64](#uint64) |  | Offset of task group |
| limit | [uint64](#uint64) |  | Limit on the number of tasks returned |
| include_favoritor | [string](#string) | repeated | Group loved by Users |
| desc | [bool](#bool) |  | When desc is true, the task groups will be returned according to the created_time in descending order. |
| ignore_detail | [bool](#bool) |  | When ignore_detail is true, each returned task group will ignore the fields that will only be displayed on the single task group detail page. |
| exclude_favoritor | [string](#string) | repeated | Group disloved by Users |






<a name="tusimple.octodrill.FindTaskGroupResponse"></a>

### FindTaskGroupResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task_groups | [TaskGroup](#tusimple.octodrill.TaskGroup) | repeated |  |
| total | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FindTaskRequest"></a>

### FindTaskRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  |  |
| name | [string](#string) |  |  |
| type | [string](#string) |  |  |
| status | [string](#string) |  |  |
| image | [string](#string) |  |  |
| creator | [string](#string) |  |  |
| create_time | [TimePair](#tusimple.octodrill.TimePair) |  |  |
| task_group_id | [uint64](#uint64) |  |  |
| offset | [uint64](#uint64) |  |  |
| limit | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FindTaskResponse"></a>

### FindTaskResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tasks | [Task](#tusimple.octodrill.Task) | repeated |  |






<a name="tusimple.octodrill.FindTicketsRequest"></a>

### FindTicketsRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| offset | [uint64](#uint64) |  |  |
| limit | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FindTicketsResponse"></a>

### FindTicketsResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tickets | [string](#string) | repeated |  |






<a name="tusimple.octodrill.FindUsersRequest"></a>

### FindUsersRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| offset | [uint64](#uint64) |  |  |
| limit | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FindUsersResponse"></a>

### FindUsersResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| users | [User](#tusimple.octodrill.User) | repeated |  |






<a name="tusimple.octodrill.FirstScenarioRequest"></a>

### FirstScenarioRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| id | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FirstScenarioResponse"></a>

### FirstScenarioResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario | [Scenario](#tusimple.octodrill.Scenario) |  |  |






<a name="tusimple.octodrill.FirstScenarioVersionRequest"></a>

### FirstScenarioVersionRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FirstScenarioVersionResponse"></a>

### FirstScenarioVersionResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| template | [ScenarioVersion](#tusimple.octodrill.ScenarioVersion) |  |  |






<a name="tusimple.octodrill.FirstTaskGroupRequest"></a>

### FirstTaskGroupRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| id | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FirstTaskGroupResponse"></a>

### FirstTaskGroupResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task_group | [TaskGroup](#tusimple.octodrill.TaskGroup) |  |  |






<a name="tusimple.octodrill.FirstTaskRequest"></a>

### FirstTaskRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FirstTaskResponse"></a>

### FirstTaskResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task | [Task](#tusimple.octodrill.Task) |  |  |






<a name="tusimple.octodrill.FirstUserRequest"></a>

### FirstUserRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| name | [string](#string) |  |  |






<a name="tusimple.octodrill.FirstUserResponse"></a>

### FirstUserResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| user | [User](#tusimple.octodrill.User) |  |  |






<a name="tusimple.octodrill.GetInstanceCaseRequest"></a>

### GetInstanceCaseRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task_id | [uint64](#uint64) |  |  |
| instance_id | [uint64](#uint64) |  |  |
| perception_mode | [string](#string) |  |  |






<a name="tusimple.octodrill.GetInstanceCaseResponse"></a>

### GetInstanceCaseResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_cases | [ScenarioCase](#tusimple.octodrill.ScenarioCase) | repeated |  |
| back_off_seconds | [int32](#int32) |  |  |






<a name="tusimple.octodrill.GetScenarioVersionTagIntersectionRequest"></a>

### GetScenarioVersionTagIntersectionRequest
#### Note
1. If there is no intersection, return empty array;


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_version_ids | [uint64](#uint64) | repeated |  |






<a name="tusimple.octodrill.GetScenarioVersionTagIntersectionResponse"></a>

### GetScenarioVersionTagIntersectionResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tags | [string](#string) | repeated |  |






<a name="tusimple.octodrill.GetScenarioVersionTicketIntersectionRequest"></a>

### GetScenarioVersionTicketIntersectionRequest
#### Note
1. If there is no intersection, return empty array;


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_version_ids | [uint64](#uint64) | repeated |  |






<a name="tusimple.octodrill.GetScenarioVersionTicketIntersectionResponse"></a>

### GetScenarioVersionTicketIntersectionResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tickets | [string](#string) | repeated |  |






<a name="tusimple.octodrill.GetTaskGroupsUsedByTaskGroupListPageRequest"></a>

### GetTaskGroupsUsedByTaskGroupListPageRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| search_condition | [FindTaskGroupRequest](#tusimple.octodrill.FindTaskGroupRequest) |  |  |
| favorite_id | [string](#string) |  |  |






<a name="tusimple.octodrill.GetTaskGroupsUsedByTaskGroupListPageResponse"></a>

### GetTaskGroupsUsedByTaskGroupListPageResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task_groups | [TaskGroup](#tusimple.octodrill.TaskGroup) | repeated |  |






<a name="tusimple.octodrill.MapInfo"></a>

### MapInfo



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| map_group | [string](#string) |  |  |
| map_feature | [string](#string) |  |  |
| map_version | [string](#string) |  |  |
| map_series | [string](#string) |  |  |






<a name="tusimple.octodrill.Metric"></a>

### Metric



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| metric_template_id | [uint64](#uint64) |  |  |
| meta_data | [string](#string) |  |  |






<a name="tusimple.octodrill.MetricLevelResult"></a>

### MetricLevelResult



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| name | [string](#string) |  |  |
| type | [string](#string) |  |  |
| result | [bool](#bool) |  |  |






<a name="tusimple.octodrill.MetricResult"></a>

### MetricResult



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| name | [string](#string) |  |  |
| type | [string](#string) |  |  |
| result | [bool](#bool) |  |  |






<a name="tusimple.octodrill.MetricTemplate"></a>

### MetricTemplate



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| name | [string](#string) |  |  |
| meta_data | [string](#string) |  |  |
| tags | [string](#string) | repeated |  |
| owner | [string](#string) |  |  |
| parser_id | [string](#string) |  |  |
| ID | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.MoveScenarioToRecycleBinRequest"></a>

### MoveScenarioToRecycleBinRequest
#### Note
1. It will return the error InvalidArgument if request.scenario_id is zero;


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_id | [uint64](#uint64) |  |  |
| operator_id | [string](#string) |  |  |






<a name="tusimple.octodrill.MoveScenarioToRecycleBinResponse"></a>

### MoveScenarioToRecycleBinResponse







<a name="tusimple.octodrill.OperationRecord"></a>

### OperationRecord



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| created_time | [int64](#int64) |  |  |
| updated_time | [int64](#int64) |  |  |
| operator_id | [string](#string) |  |  |
| action | [string](#string) |  |  |






<a name="tusimple.octodrill.RecoverScenarioRequest"></a>

### RecoverScenarioRequest
#### Note
1. It will return the error InvalidArgument if request.scenario_id is zero;


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_id | [uint64](#uint64) |  |  |
| operator_id | [string](#string) |  |  |






<a name="tusimple.octodrill.RecoverScenarioResponse"></a>

### RecoverScenarioResponse







<a name="tusimple.octodrill.ReportCaseResultRequest"></a>

### ReportCaseResultRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task_id | [uint64](#uint64) |  |  |
| scenario_case_id | [uint64](#uint64) |  |  |
| result | [string](#string) |  |  |
| instance_id | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.ReportCaseResultResponse"></a>

### ReportCaseResultResponse







<a name="tusimple.octodrill.Scenario"></a>

### Scenario
The scenario object will be created when save as new a case.Pay attention to
distinguish between ScenarioVersion and Scenario.


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  | ID of Scenario. |
| creator | [string](#string) |  | Creator of Scenario, it is the same as the creator of the oldest version. |
| created_time | [int64](#int64) |  | Created time of Scenario, it is the same as the created_time of the oldest version. |
| updated_time | [int64](#int64) |  | TODO delete |






<a name="tusimple.octodrill.ScenarioCase"></a>

### ScenarioCase



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_history_id | [uint64](#uint64) |  |  |
| scenario_name | [string](#string) |  |  |
| global_id | [string](#string) |  |  |
| group | [string](#string) |  |  |
| record | [bool](#bool) |  |  |
| case_index | [int32](#int32) |  |  |
| group_index | [int32](#int32) |  |  |
| config | [string](#string) |  |  |






<a name="tusimple.octodrill.ScenarioResult"></a>

### ScenarioResult
The result of scenarioVersion running in task.


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task | [Task](#tusimple.octodrill.Task) |  | Which task is ScenarioVersion running in. |
| scenario_template | [ScenarioVersion](#tusimple.octodrill.ScenarioVersion) |  | All data of scenarioVersion. |
| metric_results | [string](#string) |  | Its running result in the task, including final result, level result, metric result, etc. It is a json string. |
| is_report | [bool](#bool) |  | Does ScenarioVersion run to the end. |
| task_group_name | [string](#string) |  | The name of the task group associated with the task. |
| task_group_id | [uint64](#uint64) |  | The id of the task group associated with the task. |
| created_time | [uint64](#uint64) |  |  |
| updated_time | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.ScenarioVersion"></a>

### ScenarioVersion
The scenarioVersion is smallest unit of task running.
It contains vehicles, map information, etc. Pay attention to distinguish
between ScenarioVersion and Scenario.


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| description | [string](#string) |  | Description of ScenarioVersion. |
| meta_data | [string](#string) |  | Data of ScenarioVersion. |
| tags | [uint64](#uint64) | repeated | Tag ID list of ScenarioVerison. |
| group | [string](#string) |  | Group of ScenarioVersion. |
| stage | [string](#string) |  | Stage of ScenarioVersion |
| tickets | [string](#string) | repeated | Tickets of ScenarioVersion |
| in_recycle_bin | [bool](#bool) |  | Used to mark whether the version is in the recycle bin. |
| ID | [uint64](#uint64) |  | ID of ScenarioVersion. |
| index | [uint64](#uint64) |  | Index of ScenarioVersion. |
| version | [string](#string) |  | The index of the oldest version in a scenario is 1, and the index will increase when a new version is created. |
| creator | [string](#string) |  | Creator of ScenarioVersion. |
| created_time | [int64](#int64) |  | Created time of ScenarioVersion. |
| scenario | [Scenario](#tusimple.octodrill.Scenario) |  | Which scenario does the version belong to. |
| operation_records | [OperationRecord](#tusimple.octodrill.OperationRecord) | repeated | Operation record |






<a name="tusimple.octodrill.StartInstanceForScenarioTemplateRequest"></a>

### StartInstanceForScenarioTemplateRequest







<a name="tusimple.octodrill.StartInstanceForScenarioTemplateResponse"></a>

### StartInstanceForScenarioTemplateResponse







<a name="tusimple.octodrill.StopInstanceForScenarioTemplateRequest"></a>

### StopInstanceForScenarioTemplateRequest







<a name="tusimple.octodrill.StopInstanceForScenarioTemplateResponse"></a>

### StopInstanceForScenarioTemplateResponse







<a name="tusimple.octodrill.Tag"></a>

### Tag
ScenarioVersion label.


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  | ID of tag. Will not be modified once created. |
| name | [string](#string) |  | Name of tag. |
| meta_data | [string](#string) |  | Meta Data of tag. |
| parent_id | [uint64](#uint64) |  | Parent id of tag. |
| description | [string](#string) |  | Description of tag. |
| deleted | [bool](#bool) |  | Used to mark whether the tag has been deleted |
| creator | [string](#string) |  | Creator of tag. |
| not_tag | [bool](#bool) |  | Whether the tag can be assign to a scenario. If not_tag is false, this tag is a node in tag tree and can not be assign to a scenario. |






<a name="tusimple.octodrill.TagList"></a>

### TagList
Logical minimum unit when searching by tag.


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| in_tag_list | [uint64](#uint64) | repeated | Indicates that the tag is included. |
| not_in_tag_list | [uint64](#uint64) | repeated | Indicates that the tag is not included. |






<a name="tusimple.octodrill.TagTree"></a>

### TagTree
Shows the tree structure of the tag. Each node in the tree only has tag id.


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| parent_id | [uint64](#uint64) |  | Parent tag id of subtree. |
| children | [TagTree](#tusimple.octodrill.TagTree) | repeated | Subtree. |






<a name="tusimple.octodrill.Task"></a>

### Task
Task is the smallest unit for running tasks.


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  | ID of task. |
| name | [string](#string) |  | Name of task. |
| status | [string](#string) |  | Status of task; |
| fail_rate | [float](#float) |  | Fail rate of task. |
| image | [string](#string) |  | Docker image of the task. |
| created_time | [int64](#int64) |  | Created time of task. |
| updated_time | [int64](#int64) |  | Updated time of task. |
| creator | [string](#string) |  | Creator of the task. |
| task_group_id | [uint64](#uint64) |  | The group the task belongs to. |
| scenario_template_ids | [uint64](#uint64) | repeated | ScenarioVersion id list of the task. |
| priority | [int64](#int64) |  | Priority of the task. |
| meta_data | [string](#string) |  | It is optional parameters of task. |
| type | [string](#string) |  | Type of Task such as Planning, Integration. |
| perception_mode | [string](#string) |  | Perception mode of task. |






<a name="tusimple.octodrill.TaskGroup"></a>

### TaskGroup
task group is a collection of tasks.


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  | ID of task group. |
| name | [string](#string) |  | Name of task group.

required |
| description | [string](#string) |  | Description of task group. |
| creator | [string](#string) |  | Creator of task group. |
| frequency | [uint64](#uint64) |  | Frequency of task group. |
| last_fail_rate | [double](#double) |  | Last fail rate of task. |
| created_time | [int64](#int64) |  | Created time of task group. |
| updated_time | [int64](#int64) |  | Updated time of task group. |
| image | [DockerImage](#tusimple.octodrill.DockerImage) |  | Docker image of task group. It is also the default docker image of task. |
| scenarios | [uint64](#uint64) | repeated | Base scenarios of task group. It is also the default scenarios of task. |
| base_task_id | [uint64](#uint64) |  | The default base task when comparing tasks in the task group. |
| priority | [uint64](#uint64) |  | Priority of task group. It is also the default priority of task. |
| ego_setting | [string](#string) |  | Ego setting of task group. |
| scenario_condition | [FindScenarioVersionsRequest](#tusimple.octodrill.FindScenarioVersionsRequest) |  | Search condition for Scenarioversion. It is also the default scenario_condition of task. |
| base_task_group_id | [uint64](#uint64) |  | Use its latest task that has finished running as the Base Task. |
| map_info | [MapInfo](#tusimple.octodrill.MapInfo) | repeated | Map info of task group |
| packages | [string](#string) | repeated | Specified package list of task group |
| perception_mode | [PerceptionMode](#tusimple.octodrill.PerceptionMode) |  | Perception mode of task group. |
| homer_mode | [HomerMode](#tusimple.octodrill.HomerMode) |  | Homer mode if task group. |






<a name="tusimple.octodrill.TimePair"></a>

### TimePair
Time pair containing start and end time.


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| start_time | [int64](#int64) |  | Start time. It is unix timestamp. |
| end_time | [int64](#int64) |  | End time. It is unix timestamp. |






<a name="tusimple.octodrill.UpdateEntityTemplateRequest"></a>

### UpdateEntityTemplateRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| template | [EntityTemplate](#tusimple.octodrill.EntityTemplate) |  |  |






<a name="tusimple.octodrill.UpdateEntityTemplateResponse"></a>

### UpdateEntityTemplateResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| template | [EntityTemplate](#tusimple.octodrill.EntityTemplate) |  |  |






<a name="tusimple.octodrill.UpdateMetricTemplateRequest"></a>

### UpdateMetricTemplateRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| template | [MetricTemplate](#tusimple.octodrill.MetricTemplate) |  |  |






<a name="tusimple.octodrill.UpdateMetricTemplateResponse"></a>

### UpdateMetricTemplateResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| template | [MetricTemplate](#tusimple.octodrill.MetricTemplate) |  |  |






<a name="tusimple.octodrill.UpdateScenarioRequest"></a>

### UpdateScenarioRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| id | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.UpdateScenarioResponse"></a>

### UpdateScenarioResponse







<a name="tusimple.octodrill.UpdateScenarioVersionsRequest"></a>

### UpdateScenarioVersionsRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ids | [uint64](#uint64) | repeated |  |
| added_tags | [uint64](#uint64) | repeated |  |
| deleted_tags | [uint64](#uint64) | repeated |  |
| stage | [string](#string) |  |  |
| added_tickets | [string](#string) | repeated |  |
| deleted_tickets | [string](#string) | repeated |  |






<a name="tusimple.octodrill.UpdateScenarioVersionsResponse"></a>

### UpdateScenarioVersionsResponse







<a name="tusimple.octodrill.UpdateTagRequest"></a>

### UpdateTagRequest
#### Note
1. If request.tag.ID is empty, error InvalidArgument will be returned;
2. If request.tag.Name is exists, error InvalidArgument will be returned;


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tag | [Tag](#tusimple.octodrill.Tag) |  |  |






<a name="tusimple.octodrill.UpdateTagResponse"></a>

### UpdateTagResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tag | [Tag](#tusimple.octodrill.Tag) |  |  |






<a name="tusimple.octodrill.UpdateTaskGroupRequest"></a>

### UpdateTaskGroupRequest
#### Note
1. The ID, frequency, last_fail_rate, created_time in the request.task_group
will be ignored;
2. If request.task_group.editor not exists, generate a new User;
3. It will only update non-zero fields except scenarios and
scenario_condition;


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task_group | [TaskGroup](#tusimple.octodrill.TaskGroup) |  |  |






<a name="tusimple.octodrill.UpdateTaskGroupResponse"></a>

### UpdateTaskGroupResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| id | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.UpdateTaskRequest"></a>

### UpdateTaskRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task | [Task](#tusimple.octodrill.Task) |  |  |






<a name="tusimple.octodrill.UpdateTaskResponse"></a>

### UpdateTaskResponse







<a name="tusimple.octodrill.UpdateUserRequest"></a>

### UpdateUserRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| user | [User](#tusimple.octodrill.User) |  |  |






<a name="tusimple.octodrill.UpdateUserResponse"></a>

### UpdateUserResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| user | [User](#tusimple.octodrill.User) |  |  |






<a name="tusimple.octodrill.User"></a>

### User



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| name | [string](#string) |  |  |





 <!-- end messages -->


<a name="tusimple.octodrill.DockerImage.ImageType"></a>

### DockerImage.ImageType


| Name | Number | Description |
| ---- | ------ | ----------- |
| UNKNOWN_IMAGE_TYPE | 0 |  |
| ARTIFACTORY | 1 |  |
| CUSTOM | 2 |  |



<a name="tusimple.octodrill.HomerMode"></a>

### HomerMode


| Name | Number | Description |
| ---- | ------ | ----------- |
| UNKNOWN_HOMER_MODE | 0 |  |
| BASIC | 1 |  |
| PREDICTION | 2 |  |



<a name="tusimple.octodrill.PerceptionMode"></a>

### PerceptionMode


| Name | Number | Description |
| ---- | ------ | ----------- |
| UNKNOWN_PERCEPTION_MODE | 0 |  |
| DEFAULT | 1 |  |
| HOMER | 2 |  |
| NOT_HOMER | 3 |  |


 <!-- end enums -->

 <!-- end HasExtensions -->




## Scalar Value Types

| .proto Type | Notes | C++ | Java | Python | Go | C# | PHP | Ruby |
| ----------- | ----- | --- | ---- | ------ | -- | -- | --- | ---- |
| <a name="double" /> double |  | double | double | float | float64 | double | float | Float |
| <a name="float" /> float |  | float | float | float | float32 | float | float | Float |
| <a name="int32" /> int32 | Uses variable-length encoding. Inefficient for encoding negative numbers – if your field is likely to have negative values, use sint32 instead. | int32 | int | int | int32 | int | integer | Bignum or Fixnum (as required) |
| <a name="int64" /> int64 | Uses variable-length encoding. Inefficient for encoding negative numbers – if your field is likely to have negative values, use sint64 instead. | int64 | long | int/long | int64 | long | integer/string | Bignum |
| <a name="uint32" /> uint32 | Uses variable-length encoding. | uint32 | int | int/long | uint32 | uint | integer | Bignum or Fixnum (as required) |
| <a name="uint64" /> uint64 | Uses variable-length encoding. | uint64 | long | int/long | uint64 | ulong | integer/string | Bignum or Fixnum (as required) |
| <a name="sint32" /> sint32 | Uses variable-length encoding. Signed int value. These more efficiently encode negative numbers than regular int32s. | int32 | int | int | int32 | int | integer | Bignum or Fixnum (as required) |
| <a name="sint64" /> sint64 | Uses variable-length encoding. Signed int value. These more efficiently encode negative numbers than regular int64s. | int64 | long | int/long | int64 | long | integer/string | Bignum |
| <a name="fixed32" /> fixed32 | Always four bytes. More efficient than uint32 if values are often greater than 2^28. | uint32 | int | int | uint32 | uint | integer | Bignum or Fixnum (as required) |
| <a name="fixed64" /> fixed64 | Always eight bytes. More efficient than uint64 if values are often greater than 2^56. | uint64 | long | int/long | uint64 | ulong | integer/string | Bignum |
| <a name="sfixed32" /> sfixed32 | Always four bytes. | int32 | int | int | int32 | int | integer | Bignum or Fixnum (as required) |
| <a name="sfixed64" /> sfixed64 | Always eight bytes. | int64 | long | int/long | int64 | long | integer/string | Bignum |
| <a name="bool" /> bool |  | bool | boolean | boolean | bool | bool | boolean | TrueClass/FalseClass |
| <a name="string" /> string | A string must always contain UTF-8 encoded or 7-bit ASCII text. | string | String | str/unicode | string | string | string | String (UTF-8) |
| <a name="bytes" /> bytes | May contain any arbitrary sequence of bytes. | string | ByteString | str | []byte | ByteString | string | String (ASCII-8BIT) |
