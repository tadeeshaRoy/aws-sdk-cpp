﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/JobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/comprehend/model/InputDataConfig.h>
#include <aws/comprehend/model/OutputDataConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Provides information about a dominant language detection job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DominantLanguageDetectionJobProperties">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API DominantLanguageDetectionJobProperties
  {
  public:
    DominantLanguageDetectionJobProperties();
    DominantLanguageDetectionJobProperties(Aws::Utils::Json::JsonView jsonValue);
    DominantLanguageDetectionJobProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier assigned to the dominant language detection job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier assigned to the dominant language detection job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The identifier assigned to the dominant language detection job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The identifier assigned to the dominant language detection job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The identifier assigned to the dominant language detection job.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier assigned to the dominant language detection job.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier assigned to the dominant language detection job.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The name that you assigned to the dominant language detection job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name that you assigned to the dominant language detection job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name that you assigned to the dominant language detection job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name that you assigned to the dominant language detection job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name that you assigned to the dominant language detection job.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name that you assigned to the dominant language detection job.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name that you assigned to the dominant language detection job.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The current status of the dominant language detection job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The current status of the dominant language detection job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The current status of the dominant language detection job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>The current status of the dominant language detection job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the dominant language detection job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>A description for the status of a job.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description for the status of a job.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description for the status of a job.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description for the status of a job.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description for the status of a job.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description for the status of a job.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description for the status of a job.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The time that the dominant language detection job was submitted for
     * processing.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }

    /**
     * <p>The time that the dominant language detection job was submitted for
     * processing.</p>
     */
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }

    /**
     * <p>The time that the dominant language detection job was submitted for
     * processing.</p>
     */
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }

    /**
     * <p>The time that the dominant language detection job was submitted for
     * processing.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}

    /**
     * <p>The time that the dominant language detection job was submitted for
     * processing.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}


    /**
     * <p>The time that the dominant language detection job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time that the dominant language detection job completed.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time that the dominant language detection job completed.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time that the dominant language detection job completed.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time that the dominant language detection job completed.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The input data configuration that you supplied when you created the dominant
     * language detection job.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>The input data configuration that you supplied when you created the dominant
     * language detection job.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>The input data configuration that you supplied when you created the dominant
     * language detection job.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>The input data configuration that you supplied when you created the dominant
     * language detection job.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>The input data configuration that you supplied when you created the dominant
     * language detection job.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The output data configuration that you supplied when you created the dominant
     * language detection job.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>The output data configuration that you supplied when you created the dominant
     * language detection job.</p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>The output data configuration that you supplied when you created the dominant
     * language detection job.</p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>The output data configuration that you supplied when you created the dominant
     * language detection job.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>The output data configuration that you supplied when you created the dominant
     * language detection job.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that gives Amazon Comprehend read access to
     * your input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that gives Amazon Comprehend read access to
     * your input data.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that gives Amazon Comprehend read access to
     * your input data.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that gives Amazon Comprehend read access to
     * your input data.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that gives Amazon Comprehend read access to
     * your input data.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that gives Amazon Comprehend read access to
     * your input data.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that gives Amazon Comprehend read access to
     * your input data.</p>
     */
    inline DominantLanguageDetectionJobProperties& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::Utils::DateTime m_submitTime;
    bool m_submitTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
