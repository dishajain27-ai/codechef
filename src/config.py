import os
from pathlib import Path
from pydantic import BaseModel, Field


class BotConfig(BaseModel):
    # API & Session Credentials
    gemini_api_key: str = Field(default_factory=lambda: os.getenv("GEMINI_API_KEY", ""))
    gemini_model: str = Field(default_factory=lambda: os.getenv("GEMINI_MODEL", "gemini-3.5-flash-lite"))
    codechef_session: str = Field(default_factory=lambda: os.getenv("CODECHEF_SESSION", ""))

    # Language Settings
    language: str = Field(default_factory=lambda: os.getenv("LANGUAGE", "cpp"))  # "cpp" or "python3"
    max_retries: int = Field(default_factory=lambda: int(os.getenv("MAX_RETRIES", "3")))

    # Human-Like Randomization & Pacing
    randomize_batch: bool = Field(default_factory=lambda: os.getenv("RANDOMIZE_BATCH", "true").lower() in ("true", "1", "yes"))
    min_problems_per_run: int = Field(default_factory=lambda: int(os.getenv("MIN_PROBLEMS_PER_RUN", "1")))
    max_problems_per_run: int = Field(default_factory=lambda: int(os.getenv("MAX_PROBLEMS_PER_RUN", "2")))
    daily_target_min: int = Field(default_factory=lambda: int(os.getenv("DAILY_TARGET_MIN", "1")))
    daily_target_max: int = Field(default_factory=lambda: int(os.getenv("DAILY_TARGET_MAX", "6")))

    # Random Pacing Delay between Submissions (in seconds, e.g. 75s to 180s)
    min_delay_seconds: int = Field(default_factory=lambda: int(os.getenv("MIN_DELAY_SECONDS", "75")))
    max_delay_seconds: int = Field(default_factory=lambda: int(os.getenv("MAX_DELAY_SECONDS", "180")))
    initial_jitter_min_seconds: int = Field(default_factory=lambda: int(os.getenv("INITIAL_JITTER_MIN_SECONDS", "15")))
    initial_jitter_max_seconds: int = Field(default_factory=lambda: int(os.getenv("INITIAL_JITTER_MAX_SECONDS", "90")))

    # Difficulty Range (Ladder Progression)
    min_difficulty: int = Field(default_factory=lambda: int(os.getenv("MIN_DIFFICULTY", "200")))
    max_difficulty: int = Field(default_factory=lambda: int(os.getenv("MAX_DIFFICULTY", "1400")))

    # File Paths
    data_file: Path = Field(default_factory=lambda: Path(os.getenv("DATA_FILE", "data/solved_problems.json")))
    solutions_dir: Path = Field(default_factory=lambda: Path(os.getenv("SOLUTIONS_DIR", "solutions")))

    # Dry Run Mode
    dry_run: bool = Field(default_factory=lambda: os.getenv("DRY_RUN", "false").lower() in ("true", "1", "yes"))


config = BotConfig()
