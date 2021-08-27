# Protocol Documentation
<a name="top"></a>

## Table of Contents

- [proto/api.proto](#proto/api.proto)
    - [CreateEntityTemplateRequest](#tusimple.octodrill.CreateEntityTemplateRequest)
    - [CreateEntityTemplateResponse](#tusimple.octodrill.CreateEntityTemplateResponse)
    - [CreateMetricTemplateRequest](#tusimple.octodrill.CreateMetricTemplateRequest)
    - [CreateMetricTemplateResponse](#tusimple.octodrill.CreateMetricTemplateResponse)
    - [CreateScenarioRequest](#tusimple.octodrill.CreateScenarioRequest)
    - [CreateScenarioResponse](#tusimple.octodrill.CreateScenarioResponse)
    - [CreateScenarioVersionRequest](#tusimple.octodrill.CreateScenarioVersionRequest)
    - [CreateScenarioVersionResponse](#tusimple.octodrill.CreateScenarioVersionResponse)
    - [CreateTagRequest](#tusimple.octodrill.CreateTagRequest)
    - [CreateTagResponse](#tusimple.octodrill.CreateTagResponse)
    - [CreateTaskGroupRequest](#tusimple.octodrill.CreateTaskGroupRequest)
    - [CreateTaskGroupResponse](#tusimple.octodrill.CreateTaskGroupResponse)
    - [CreateTaskRequest](#tusimple.octodrill.CreateTaskRequest)
    - [CreateTaskResponse](#tusimple.octodrill.CreateTaskResponse)
    - [CreateUserRequest](#tusimple.octodrill.CreateUserRequest)
    - [CreateUserResponse](#tusimple.octodrill.CreateUserResponse)
    - [DeleteEntityTemplateRequest](#tusimple.octodrill.DeleteEntityTemplateRequest)
    - [DeleteEntityTemplateResponse](#tusimple.octodrill.DeleteEntityTemplateResponse)
    - [DeleteMetricTemplateRequest](#tusimple.octodrill.DeleteMetricTemplateRequest)
    - [DeleteMetricTemplateResponse](#tusimple.octodrill.DeleteMetricTemplateResponse)
    - [DeleteTagRequest](#tusimple.octodrill.DeleteTagRequest)
    - [DeleteTagResponse](#tusimple.octodrill.DeleteTagResponse)
    - [DeleteTaskGroupRequest](#tusimple.octodrill.DeleteTaskGroupRequest)
    - [DeleteTaskGroupResponse](#tusimple.octodrill.DeleteTaskGroupResponse)
    - [DeleteTaskRequest](#tusimple.octodrill.DeleteTaskRequest)
    - [DeleteTaskResponse](#tusimple.octodrill.DeleteTaskResponse)
    - [DeleteUserRequest](#tusimple.octodrill.DeleteUserRequest)
    - [DeleteUserResponse](#tusimple.octodrill.DeleteUserResponse)
    - [Entity](#tusimple.octodrill.Entity)
    - [EntityTemplate](#tusimple.octodrill.EntityTemplate)
    - [FindEntityTemplatesRequest](#tusimple.octodrill.FindEntityTemplatesRequest)
    - [FindEntityTemplatesResponse](#tusimple.octodrill.FindEntityTemplatesResponse)
    - [FindFlattenTagTreeRequest](#tusimple.octodrill.FindFlattenTagTreeRequest)
    - [FindFlattenTagTreeResponse](#tusimple.octodrill.FindFlattenTagTreeResponse)
    - [FindMetricTemplatesRequest](#tusimple.octodrill.FindMetricTemplatesRequest)
    - [FindMetricTemplatesResponse](#tusimple.octodrill.FindMetricTemplatesResponse)
    - [FindScenarioResultRequest](#tusimple.octodrill.FindScenarioResultRequest)
    - [FindScenarioResultResponse](#tusimple.octodrill.FindScenarioResultResponse)
    - [FindScenarioVersionFieldsRequest](#tusimple.octodrill.FindScenarioVersionFieldsRequest)
    - [FindScenarioVersionFieldsResponse](#tusimple.octodrill.FindScenarioVersionFieldsResponse)
    - [FindScenarioVersionsRequest](#tusimple.octodrill.FindScenarioVersionsRequest)
    - [FindScenarioVersionsResponse](#tusimple.octodrill.FindScenarioVersionsResponse)
    - [FindScenariosRequest](#tusimple.octodrill.FindScenariosRequest)
    - [FindScenariosResponse](#tusimple.octodrill.FindScenariosResponse)
    - [FindStageRequest](#tusimple.octodrill.FindStageRequest)
    - [FindStageResponse](#tusimple.octodrill.FindStageResponse)
    - [FindTagTreeRequest](#tusimple.octodrill.FindTagTreeRequest)
    - [FindTagTreeResponse](#tusimple.octodrill.FindTagTreeResponse)
    - [FindTagsRequest](#tusimple.octodrill.FindTagsRequest)
    - [FindTagsResponse](#tusimple.octodrill.FindTagsResponse)
    - [FindTaskGroupRequest](#tusimple.octodrill.FindTaskGroupRequest)
    - [FindTaskGroupResponse](#tusimple.octodrill.FindTaskGroupResponse)
    - [FindTaskRequest](#tusimple.octodrill.FindTaskRequest)
    - [FindTaskResponse](#tusimple.octodrill.FindTaskResponse)
    - [FindTicketsRequest](#tusimple.octodrill.FindTicketsRequest)
    - [FindTicketsResponse](#tusimple.octodrill.FindTicketsResponse)
    - [FindUsersRequest](#tusimple.octodrill.FindUsersRequest)
    - [FindUsersResponse](#tusimple.octodrill.FindUsersResponse)
    - [FirstScenarioRequest](#tusimple.octodrill.FirstScenarioRequest)
    - [FirstScenarioResponse](#tusimple.octodrill.FirstScenarioResponse)
    - [FirstScenarioVersionRequest](#tusimple.octodrill.FirstScenarioVersionRequest)
    - [FirstScenarioVersionResponse](#tusimple.octodrill.FirstScenarioVersionResponse)
    - [FirstTaskRequest](#tusimple.octodrill.FirstTaskRequest)
    - [FirstTaskResponse](#tusimple.octodrill.FirstTaskResponse)
    - [FirstUserRequest](#tusimple.octodrill.FirstUserRequest)
    - [FirstUserResponse](#tusimple.octodrill.FirstUserResponse)
    - [GetInstanceCaseRequest](#tusimple.octodrill.GetInstanceCaseRequest)
    - [GetInstanceCaseResponse](#tusimple.octodrill.GetInstanceCaseResponse)
    - [GetScenarioVersionTagIntersectionRequest](#tusimple.octodrill.GetScenarioVersionTagIntersectionRequest)
    - [GetScenarioVersionTagIntersectionResponse](#tusimple.octodrill.GetScenarioVersionTagIntersectionResponse)
    - [GetScenarioVersionTicketIntersectionRequest](#tusimple.octodrill.GetScenarioVersionTicketIntersectionRequest)
    - [GetScenarioVersionTicketIntersectionResponse](#tusimple.octodrill.GetScenarioVersionTicketIntersectionResponse)
    - [Metric](#tusimple.octodrill.Metric)
    - [MetricLevelResult](#tusimple.octodrill.MetricLevelResult)
    - [MetricResult](#tusimple.octodrill.MetricResult)
    - [MetricTemplate](#tusimple.octodrill.MetricTemplate)
    - [MoveScenarioVersionToRecycleBinRequest](#tusimple.octodrill.MoveScenarioVersionToRecycleBinRequest)
    - [MoveScenarioVersionToRecycleBinResponse](#tusimple.octodrill.MoveScenarioVersionToRecycleBinResponse)
    - [RecoverScenarioVersionRequest](#tusimple.octodrill.RecoverScenarioVersionRequest)
    - [RecoverScenarioVersionResponse](#tusimple.octodrill.RecoverScenarioVersionResponse)
    - [ReportCaseResultRequest](#tusimple.octodrill.ReportCaseResultRequest)
    - [ReportCaseResultResponse](#tusimple.octodrill.ReportCaseResultResponse)
    - [Scenario](#tusimple.octodrill.Scenario)
    - [ScenarioCase](#tusimple.octodrill.ScenarioCase)
    - [ScenarioResult](#tusimple.octodrill.ScenarioResult)
    - [ScenarioVersion](#tusimple.octodrill.ScenarioVersion)
    - [StartInstanceForScenarioTemplateRequest](#tusimple.octodrill.StartInstanceForScenarioTemplateRequest)
    - [StartInstanceForScenarioTemplateResponse](#tusimple.octodrill.StartInstanceForScenarioTemplateResponse)
    - [StopInstanceForScenarioTemplateRequest](#tusimple.octodrill.StopInstanceForScenarioTemplateRequest)
    - [StopInstanceForScenarioTemplateResponse](#tusimple.octodrill.StopInstanceForScenarioTemplateResponse)
    - [Tag](#tusimple.octodrill.Tag)
    - [TagList](#tusimple.octodrill.TagList)
    - [TagTree](#tusimple.octodrill.TagTree)
    - [Task](#tusimple.octodrill.Task)
    - [TaskGroup](#tusimple.octodrill.TaskGroup)
    - [TimePair](#tusimple.octodrill.TimePair)
    - [UpdateEntityTemplateRequest](#tusimple.octodrill.UpdateEntityTemplateRequest)
    - [UpdateEntityTemplateResponse](#tusimple.octodrill.UpdateEntityTemplateResponse)
    - [UpdateMetricTemplateRequest](#tusimple.octodrill.UpdateMetricTemplateRequest)
    - [UpdateMetricTemplateResponse](#tusimple.octodrill.UpdateMetricTemplateResponse)
    - [UpdateScenarioRequest](#tusimple.octodrill.UpdateScenarioRequest)
    - [UpdateScenarioResponse](#tusimple.octodrill.UpdateScenarioResponse)
    - [UpdateTagRequest](#tusimple.octodrill.UpdateTagRequest)
    - [UpdateTagResponse](#tusimple.octodrill.UpdateTagResponse)
    - [UpdateTaskGroupRequest](#tusimple.octodrill.UpdateTaskGroupRequest)
    - [UpdateTaskGroupResponse](#tusimple.octodrill.UpdateTaskGroupResponse)
    - [UpdateTaskRequest](#tusimple.octodrill.UpdateTaskRequest)
    - [UpdateTaskResponse](#tusimple.octodrill.UpdateTaskResponse)
    - [UpdateUserRequest](#tusimple.octodrill.UpdateUserRequest)
    - [UpdateUserResponse](#tusimple.octodrill.UpdateUserResponse)
    - [User](#tusimple.octodrill.User)
  
    - [Simcraft](#tusimple.octodrill.Simcraft)
  
- [Scalar Value Types](#scalar-value-types)



<a name="proto/api.proto"></a>
<p align="right"><a href="#top">Top</a></p>

## proto/api.proto



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



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tag | [Tag](#tusimple.octodrill.Tag) |  | Note: If the tag.id is not empty, The value of the tag.ID will be ignored. |






<a name="tusimple.octodrill.CreateTagResponse"></a>

### CreateTagResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tag | [Tag](#tusimple.octodrill.Tag) |  | #### Note: * If the tag.id is not empty, The value of the tag.ID will be ignored. * If the tag.name already exists, codes.AlreadyExists will be returned. * If the tag.parent_id not exists, codes.InvalidArgument will be returned. * If the tag.parent_id is deleted, codes.InvalidArgument will be returned. |






<a name="tusimple.octodrill.CreateTaskGroupRequest"></a>

### CreateTaskGroupRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task_group | [TaskGroup](#tusimple.octodrill.TaskGroup) |  |  |






<a name="tusimple.octodrill.CreateTaskGroupResponse"></a>

### CreateTaskGroupResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task_group | [TaskGroup](#tusimple.octodrill.TaskGroup) |  |  |






<a name="tusimple.octodrill.CreateTaskRequest"></a>

### CreateTaskRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task | [Task](#tusimple.octodrill.Task) |  |  |






<a name="tusimple.octodrill.CreateTaskResponse"></a>

### CreateTaskResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task | [Task](#tusimple.octodrill.Task) |  |  |






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







<a name="tusimple.octodrill.DeleteTagRequest"></a>

### DeleteTagRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.DeleteTagResponse"></a>

### DeleteTagResponse







<a name="tusimple.octodrill.DeleteTaskGroupRequest"></a>

### DeleteTaskGroupRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.DeleteTaskGroupResponse"></a>

### DeleteTaskGroupResponse







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






<a name="tusimple.octodrill.FindScenarioVersionFieldsRequest"></a>

### FindScenarioVersionFieldsRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_id | [string](#string) |  |  |
| version | [string](#string) |  |  |
| description | [string](#string) |  |  |






<a name="tusimple.octodrill.FindScenarioVersionFieldsResponse"></a>

### FindScenarioVersionFieldsResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_ids | [uint64](#uint64) | repeated |  |
| versions | [string](#string) | repeated |  |
| descriptions | [string](#string) | repeated |  |






<a name="tusimple.octodrill.FindScenarioVersionsRequest"></a>

### FindScenarioVersionsRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| in_recycle_bin | [bool](#bool) |  | Find the version in/not in the recycle bin. |
| scenario_id | [uint64](#uint64) |  | Find the version belonging to the scenario. |
| description | [string](#string) |  | Find the version that contains it in the description. |
| tags | [TagList](#tusimple.octodrill.TagList) | repeated | Find the version that meets the tag requirements. |
| tickets | [string](#string) | repeated | Find the version that meets the ticket requirements. The relationship between tickets is &#34;or&#34;. |
| creator | [string](#string) |  | Find the version that created by creator. |
| created_time | [TimePair](#tusimple.octodrill.TimePair) |  | Find the version whose creation time is within a period of time. |
| scenario_created_time | [TimePair](#tusimple.octodrill.TimePair) |  | Find the version whose scenario&#39;s creation time is within a period of time. |
| scenario_creator | [string](#string) |  | Find the version that scenario created by creator. |
| limit | [uint64](#uint64) |  | Number limit of returns. |
| offset | [uint64](#uint64) |  | Offset of returns. |
| stage | [string](#string) |  | Find the version belonging to the stage. |
| ignore_scenario_detail | [bool](#bool) |  | When it is true, only ScenarioVersion id will be returned. |
| latest | [bool](#bool) |  | Find the latest version or all versions. When latest=false, all versions will be returned. |
| fuzzy_tickets | [string](#string) | repeated | Use ticket fuzzy search version. |
| desc | [bool](#bool) |  | When desc is true, the versions will be returned according to the version id in descending order. |






<a name="tusimple.octodrill.FindScenarioVersionsResponse"></a>

### FindScenarioVersionsResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| templates | [ScenarioVersion](#tusimple.octodrill.ScenarioVersion) | repeated | If ignore=false in the request, templates is not empty |
| template_ids | [uint64](#uint64) | repeated | If ignore=true in the request, template_ids is not empty |






<a name="tusimple.octodrill.FindScenariosRequest"></a>

### FindScenariosRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_version | [FindScenarioVersionsRequest](#tusimple.octodrill.FindScenarioVersionsRequest) |  |  |
| scenario | [Scenario](#tusimple.octodrill.Scenario) |  |  |
| offset | [uint64](#uint64) |  |  |
| limit | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FindScenariosResponse"></a>

### FindScenariosResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenarios | [Scenario](#tusimple.octodrill.Scenario) | repeated |  |






<a name="tusimple.octodrill.FindStageRequest"></a>

### FindStageRequest







<a name="tusimple.octodrill.FindStageResponse"></a>

### FindStageResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| stages | [string](#string) | repeated |  |






<a name="tusimple.octodrill.FindTagTreeRequest"></a>

### FindTagTreeRequest



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
| ID | [uint64](#uint64) |  |  |
| name | [string](#string) |  |  |
| description | [string](#string) |  |  |
| owner_id | [string](#string) |  |  |
| create_time | [TimePair](#tusimple.octodrill.TimePair) |  |  |
| last_run_time | [TimePair](#tusimple.octodrill.TimePair) |  |  |
| offset | [uint64](#uint64) |  |  |
| limit | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.FindTaskGroupResponse"></a>

### FindTaskGroupResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task_groups | [TaskGroup](#tusimple.octodrill.TaskGroup) | repeated |  |






<a name="tusimple.octodrill.FindTaskRequest"></a>

### FindTaskRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  |  |
| name | [string](#string) |  |  |
| type | [string](#string) |  |  |
| status | [string](#string) |  |  |
| image | [string](#string) |  |  |
| owner_id | [string](#string) |  |  |
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






<a name="tusimple.octodrill.GetInstanceCaseResponse"></a>

### GetInstanceCaseResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_cases | [ScenarioCase](#tusimple.octodrill.ScenarioCase) | repeated |  |
| back_off_seconds | [int32](#int32) |  |  |






<a name="tusimple.octodrill.GetScenarioVersionTagIntersectionRequest"></a>

### GetScenarioVersionTagIntersectionRequest



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



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_version_ids | [uint64](#uint64) | repeated |  |






<a name="tusimple.octodrill.GetScenarioVersionTicketIntersectionResponse"></a>

### GetScenarioVersionTicketIntersectionResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tickets | [string](#string) | repeated |  |






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






<a name="tusimple.octodrill.MoveScenarioVersionToRecycleBinRequest"></a>

### MoveScenarioVersionToRecycleBinRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_id | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.MoveScenarioVersionToRecycleBinResponse"></a>

### MoveScenarioVersionToRecycleBinResponse







<a name="tusimple.octodrill.RecoverScenarioVersionRequest"></a>

### RecoverScenarioVersionRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| scenario_id | [uint64](#uint64) |  |  |






<a name="tusimple.octodrill.RecoverScenarioVersionResponse"></a>

### RecoverScenarioVersionResponse







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
The scenario object will be created when save as new a case.


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  | ID of Scenario.

* Creator of Scenario, it is the same as the creator of |
| creator | [string](#string) |  | the oldest version. |
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






<a name="tusimple.octodrill.ScenarioVersion"></a>

### ScenarioVersion
The scenarioVersion is smallest unit of task running.
It contains vehicles, map information, etc.


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| description | [string](#string) |  | Description of ScenarioVersion. |
| meta_data | [string](#string) |  | Data of ScenarioVersion. repeated Entity entities = 3; repeated Metric metrics = 4; |
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
| not_tag | [bool](#bool) |  | Whether the tag can be assign to a scenario. |






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
| ID | [uint64](#uint64) |  | ID of Task. |
| name | [string](#string) |  | Name of Task. |
| task_group_id | [uint64](#uint64) |  | The group the task belongs to. |
| image | [string](#string) |  | Docker image of the task. |
| owner_id | [string](#string) |  | Creator of the task. |
| scenario_template_ids | [uint64](#uint64) | repeated | ScenarioVersion id list of the task. |
| priority | [int64](#int64) |  | Priority of the task. |
| meta_data | [string](#string) |  | It is optional parameters of task. |
| type | [string](#string) |  | Type of Task such as Planning, Integration. |
| fail_rate | [float](#float) |  | Fail rate of task. |
| task_group | [TaskGroup](#tusimple.octodrill.TaskGroup) |  | TODO delete |
| created_time | [int64](#int64) |  | Created time of task. |
| updated_time | [int64](#int64) |  | Updated time of task. |






<a name="tusimple.octodrill.TaskGroup"></a>

### TaskGroup
task group is a collection of tasks.


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ID | [uint64](#uint64) |  | ID of task group. |
| name | [string](#string) |  | Name of task group. |
| description | [string](#string) |  | Description of task group. |
| image | [string](#string) |  | Base image of task group. It is also the default image of task. |
| scenarios | [uint64](#uint64) | repeated | Base scenarios of task group. It is also the default scenarios of task. |
| base_taskID | [uint64](#uint64) |  | The default base task when comparing tasks in the task group. |
| priority | [uint64](#uint64) |  | Priority of task group.It is also the default priority of task. |
| meta_data | [string](#string) |  | It is optional parameters of task group. It is also the default optional parameters of task. |
| owner_id | [string](#string) |  | Creator of task group. |






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







<a name="tusimple.octodrill.UpdateTagRequest"></a>

### UpdateTagRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tag | [Tag](#tusimple.octodrill.Tag) |  | Note: If the tag.id is empty, codes.InvalidArgument will be returned. If the tag.name already exists, codes.AlreadyExists will be returned. |






<a name="tusimple.octodrill.UpdateTagResponse"></a>

### UpdateTagResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| tag | [Tag](#tusimple.octodrill.Tag) |  |  |






<a name="tusimple.octodrill.UpdateTaskGroupRequest"></a>

### UpdateTaskGroupRequest



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task_group | [TaskGroup](#tusimple.octodrill.TaskGroup) |  |  |






<a name="tusimple.octodrill.UpdateTaskGroupResponse"></a>

### UpdateTaskGroupResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| task_group | [TaskGroup](#tusimple.octodrill.TaskGroup) |  |  |






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





 

 

 


<a name="tusimple.octodrill.Simcraft"></a>

### Simcraft


| Method Name | Request Type | Response Type | Description |
| ----------- | ------------ | ------------- | ------------|
| CreateScenarioVersion | [CreateScenarioVersionRequest](#tusimple.octodrill.CreateScenarioVersionRequest) | [CreateScenarioVersionResponse](#tusimple.octodrill.CreateScenarioVersionResponse) |  |
| FirstScenarioVersion | [FirstScenarioVersionRequest](#tusimple.octodrill.FirstScenarioVersionRequest) | [FirstScenarioVersionResponse](#tusimple.octodrill.FirstScenarioVersionResponse) | Used to query ScenarioVersion, the relationship between different query conditions is &#34;and&#34;. If there is no qualified version, return error. |
| FindScenarioVersions | [FindScenarioVersionsRequest](#tusimple.octodrill.FindScenarioVersionsRequest) | [FindScenarioVersionsResponse](#tusimple.octodrill.FindScenarioVersionsResponse) | Used to query ScenarioVersion, the relationship between different query conditions is &#34;and&#34;. Unless otherwise specified, it is an exact search. If there is no qualified ScenarioVersion, return empty. |
| FindScenarioVersionFields | [FindScenarioVersionFieldsRequest](#tusimple.octodrill.FindScenarioVersionFieldsRequest) | [FindScenarioVersionFieldsResponse](#tusimple.octodrill.FindScenarioVersionFieldsResponse) | Fuzzy search for scenario_id, scenario_version_id, description in ScenarioVersions |
| GetScenarioVersionTagIntersection | [GetScenarioVersionTagIntersectionRequest](#tusimple.octodrill.GetScenarioVersionTagIntersectionRequest) | [GetScenarioVersionTagIntersectionResponse](#tusimple.octodrill.GetScenarioVersionTagIntersectionResponse) | Get the intersection of tags in ScenarioVersions. |
| GetScenarioVersionTicketIntersection | [GetScenarioVersionTicketIntersectionRequest](#tusimple.octodrill.GetScenarioVersionTicketIntersectionRequest) | [GetScenarioVersionTicketIntersectionResponse](#tusimple.octodrill.GetScenarioVersionTicketIntersectionResponse) |  |
| CreateScenario | [CreateScenarioRequest](#tusimple.octodrill.CreateScenarioRequest) | [CreateScenarioResponse](#tusimple.octodrill.CreateScenarioResponse) |  |
| UpdateScenario | [UpdateScenarioRequest](#tusimple.octodrill.UpdateScenarioRequest) | [UpdateScenarioResponse](#tusimple.octodrill.UpdateScenarioResponse) |  |
| FirstScenario | [FirstScenarioRequest](#tusimple.octodrill.FirstScenarioRequest) | [FirstScenarioResponse](#tusimple.octodrill.FirstScenarioResponse) |  |
| FindScenarios | [FindScenariosRequest](#tusimple.octodrill.FindScenariosRequest) | [FindScenariosResponse](#tusimple.octodrill.FindScenariosResponse) |  |
| MoveScenarioVersionToRecycleBin | [MoveScenarioVersionToRecycleBinRequest](#tusimple.octodrill.MoveScenarioVersionToRecycleBinRequest) | [MoveScenarioVersionToRecycleBinResponse](#tusimple.octodrill.MoveScenarioVersionToRecycleBinResponse) |  |
| RecoverScenarioVersion | [RecoverScenarioVersionRequest](#tusimple.octodrill.RecoverScenarioVersionRequest) | [RecoverScenarioVersionResponse](#tusimple.octodrill.RecoverScenarioVersionResponse) |  |
| FindScenarioResult | [FindScenarioResultRequest](#tusimple.octodrill.FindScenarioResultRequest) | [FindScenarioResultResponse](#tusimple.octodrill.FindScenarioResultResponse) | Used to query ScenarioResult, the relationship between different query conditions is &#34;and&#34;. Unless otherwise specified, it is an exact search. |
| CreateMetricTemplate | [CreateMetricTemplateRequest](#tusimple.octodrill.CreateMetricTemplateRequest) | [CreateMetricTemplateResponse](#tusimple.octodrill.CreateMetricTemplateResponse) |  |
| UpdateMetricTemplate | [UpdateMetricTemplateRequest](#tusimple.octodrill.UpdateMetricTemplateRequest) | [UpdateMetricTemplateResponse](#tusimple.octodrill.UpdateMetricTemplateResponse) |  |
| DeleteMetricTemplate | [DeleteMetricTemplateRequest](#tusimple.octodrill.DeleteMetricTemplateRequest) | [DeleteMetricTemplateResponse](#tusimple.octodrill.DeleteMetricTemplateResponse) |  |
| FindMetricTemplates | [FindMetricTemplatesRequest](#tusimple.octodrill.FindMetricTemplatesRequest) | [FindMetricTemplatesResponse](#tusimple.octodrill.FindMetricTemplatesResponse) |  |
| CreateEntityTemplate | [CreateEntityTemplateRequest](#tusimple.octodrill.CreateEntityTemplateRequest) | [CreateEntityTemplateResponse](#tusimple.octodrill.CreateEntityTemplateResponse) |  |
| UpdateEntityTemplate | [UpdateEntityTemplateRequest](#tusimple.octodrill.UpdateEntityTemplateRequest) | [UpdateEntityTemplateResponse](#tusimple.octodrill.UpdateEntityTemplateResponse) |  |
| DeleteEntityTemplate | [DeleteEntityTemplateRequest](#tusimple.octodrill.DeleteEntityTemplateRequest) | [DeleteEntityTemplateResponse](#tusimple.octodrill.DeleteEntityTemplateResponse) |  |
| FindEntityTemplates | [FindEntityTemplatesRequest](#tusimple.octodrill.FindEntityTemplatesRequest) | [FindEntityTemplatesResponse](#tusimple.octodrill.FindEntityTemplatesResponse) |  |
| CreateTag | [CreateTagRequest](#tusimple.octodrill.CreateTagRequest) | [CreateTagResponse](#tusimple.octodrill.CreateTagResponse) |  |
| UpdateTag | [UpdateTagRequest](#tusimple.octodrill.UpdateTagRequest) | [UpdateTagResponse](#tusimple.octodrill.UpdateTagResponse) |  |
| FindTags | [FindTagsRequest](#tusimple.octodrill.FindTagsRequest) | [FindTagsResponse](#tusimple.octodrill.FindTagsResponse) |  |
| FindTagTree | [FindTagTreeRequest](#tusimple.octodrill.FindTagTreeRequest) | [FindTagTreeResponse](#tusimple.octodrill.FindTagTreeResponse) |  |
| FindFlattenTagTree | [FindFlattenTagTreeRequest](#tusimple.octodrill.FindFlattenTagTreeRequest) | [FindFlattenTagTreeResponse](#tusimple.octodrill.FindFlattenTagTreeResponse) |  |
| CreateTaskGroup | [CreateTaskGroupRequest](#tusimple.octodrill.CreateTaskGroupRequest) | [CreateTaskGroupResponse](#tusimple.octodrill.CreateTaskGroupResponse) |  |
| UpdateTaskGroup | [UpdateTaskGroupRequest](#tusimple.octodrill.UpdateTaskGroupRequest) | [UpdateTaskGroupResponse](#tusimple.octodrill.UpdateTaskGroupResponse) |  |
| FindTaskGroup | [FindTaskGroupRequest](#tusimple.octodrill.FindTaskGroupRequest) | [FindTaskGroupResponse](#tusimple.octodrill.FindTaskGroupResponse) |  |
| DeleteTaskGroup | [DeleteTaskGroupRequest](#tusimple.octodrill.DeleteTaskGroupRequest) | [DeleteTaskGroupResponse](#tusimple.octodrill.DeleteTaskGroupResponse) |  |
| CreateTask | [CreateTaskRequest](#tusimple.octodrill.CreateTaskRequest) | [CreateTaskResponse](#tusimple.octodrill.CreateTaskResponse) |  |
| UpdateTask | [UpdateTaskRequest](#tusimple.octodrill.UpdateTaskRequest) | [UpdateTaskResponse](#tusimple.octodrill.UpdateTaskResponse) |  |
| DeleteTask | [DeleteTaskRequest](#tusimple.octodrill.DeleteTaskRequest) | [DeleteTaskResponse](#tusimple.octodrill.DeleteTaskResponse) |  |
| FirstTask | [FirstTaskRequest](#tusimple.octodrill.FirstTaskRequest) | [FirstTaskResponse](#tusimple.octodrill.FirstTaskResponse) |  |
| FindTask | [FindTaskRequest](#tusimple.octodrill.FindTaskRequest) | [FindTaskResponse](#tusimple.octodrill.FindTaskResponse) |  |
| GetInstanceCase | [GetInstanceCaseRequest](#tusimple.octodrill.GetInstanceCaseRequest) | [GetInstanceCaseResponse](#tusimple.octodrill.GetInstanceCaseResponse) | rpc Create rpc Update rpc Delete |
| ReportCaseResult | [ReportCaseResultRequest](#tusimple.octodrill.ReportCaseResultRequest) | [ReportCaseResultResponse](#tusimple.octodrill.ReportCaseResultResponse) |  |
| FindStage | [FindStageRequest](#tusimple.octodrill.FindStageRequest) | [FindStageResponse](#tusimple.octodrill.FindStageResponse) |  |
| CreateUser | [CreateUserRequest](#tusimple.octodrill.CreateUserRequest) | [CreateUserResponse](#tusimple.octodrill.CreateUserResponse) |  |
| UpdateUser | [UpdateUserRequest](#tusimple.octodrill.UpdateUserRequest) | [UpdateUserResponse](#tusimple.octodrill.UpdateUserResponse) |  |
| FirstUser | [FirstUserRequest](#tusimple.octodrill.FirstUserRequest) | [FirstUserResponse](#tusimple.octodrill.FirstUserResponse) |  |
| FindUsers | [FindUsersRequest](#tusimple.octodrill.FindUsersRequest) | [FindUsersResponse](#tusimple.octodrill.FindUsersResponse) |  |
| DeleteUser | [DeleteUserRequest](#tusimple.octodrill.DeleteUserRequest) | [DeleteUserResponse](#tusimple.octodrill.DeleteUserResponse) |  |
| FindTickets | [FindTicketsRequest](#tusimple.octodrill.FindTicketsRequest) | [FindTicketsResponse](#tusimple.octodrill.FindTicketsResponse) |  |

 



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

